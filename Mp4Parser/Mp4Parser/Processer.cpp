//
//  Parser.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "Processer.h"

Processer::Processer()
{
    std::cout << "Processer() iscalled; "<< std::endl;

};

Processer::~Processer()
{
    std::cout << " ~ Processer() iscalled; "<< std::endl;
  
};

/////////////////////////////-----------------------------------/////////////////////////////////////////////Parsing Logic




void Processer::start(FileManger * filemanger, std::ifstream * mainStream , BoxModel * boxModel)
{
    uint32_t             length;
    uint64_t             dataLength;
    char                 type[ BOXTYPE_NAME_SIZE ] ;
    
    Box * box;
    box = NULL;
  
    
    memset( type, 0, BOXTYPE_NAME_SIZE );
    
    
    while (!mainStream->eof())
    {
        
        length = filemanger->readBigEndianUnsignedInteger();
        dataLength = 0;
        
        
        filemanger->readBoxType( ( char * )type, BOXTYPE_BASIC_SIZE );
        
        if( length == BOXTYPE_EXTEND_SIZE )
        {
            dataLength = filemanger->readBigEndianUnsignedInteger() - 16;
        }
        else
        {
            dataLength = length - 8;
        }
        
        if( strcmp( type, "moov" ) == 0 )
        {
            box = (ContainerBox * )(new ContainerBox());
            //continue;
        } else if( strcmp( type, "ftyp" ) == 0 )
        {
            box = ( FTYP_BOX * )( new FTYP_BOX () );
        }

        processData(box, type , mainStream, dataLength, filemanger);
        boxModel->extractData(box , type);
        
    }
    
   
    mainStream->close();
};



////////////////////////////------------------------------------------------ Export Data for each boxes.
void Processer::processData(Box * box , char *type,std::ifstream * mainStream, size_t length , FileManger * filemanger)
{
    if( strcmp( type, "ftyp" ) == 0 )
    {
        std::string * s;
        char brand[ 5 ];
        
        
        memset( brand, 0, 5 );
        mainStream->read( brand, 4 );
        
        ((FTYP_BOX *)box)->_majorBrand.append( brand );
        ((FTYP_BOX *)box)->_minorVersion = filemanger->readBigEndianUnsignedInteger();
        
        
        if( length > 8 )
        {
            length -= 8;
            
            while( length > 0 )
            {
                mainStream->read( brand, 4 );
                
                length -= 4;
                s       = new std::string( brand );
                
                ((FTYP_BOX *)box)->_compatibleBrands.push_back( s );
            }
        }
    } else if(strcmp( type, "moov") == 0) {
        
        char title[ 4 ];
        
        
        memset( title, 0, 4 );
        mainStream->read( title, 4 );
        ((ContainerBox *)box)->mContainerBoxTitle.append(title);
    }
};


/////////////////////////////-----------------------------------/////////////////////////////////////////////ProcessDATA




