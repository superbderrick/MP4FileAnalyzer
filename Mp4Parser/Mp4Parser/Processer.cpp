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
    textBuilder = new TextBuilder();
};

Processer::~Processer()
{
    delete textBuilder;
};



std::string Processer::getData(char *type, std::string _majorBrand, uint32_t _minorVersion, std::vector< std::string * > _compatibleBrands){
    
    
    std::string s;
    std::string * tt;
    std::vector< std::string * >::iterator it;
    std::ostringstream o;
    
    o << "MP4 Atom:           " << type << "\n";
    o << "                      - Major brand:       " << _majorBrand << "\n";
    o << "                      - Minor version:     " << _minorVersion << "\n";
    o << "                      - Compatible brands: \n";
    
    s = o.str();
    
    for( it = _compatibleBrands.begin(); it != _compatibleBrands.end(); ++it )
    {
        tt = *( it );
        
        o << "                          - " << *( tt ) << "\n";
    }
    
    return o.str();
};




void Processer::createBox(char *type, std::ifstream *mainStream, size_t length, FileManger *filemanger)
{
    std::string test;
    if( strcmp( type, "ftyp" ) == 0 )
    {
        FTYP_BOX * box = new FTYP_BOX();
        processData(box, mainStream, length, filemanger);

        textBuilder ->setStream(getData(type , box->_majorBrand, box->_minorVersion, box->_compatibleBrands));
        
    }
    
};


void Processer::processData(FTYP_BOX * box , std::ifstream * mainStream, size_t length , FileManger * filemanger)
{
    
    std::string * s;
    char brand[ 5 ];
    
    
    memset( brand, 0, 5 );
    mainStream->read( brand, 4 );
    
    
    box->_majorBrand.append( brand );
    box->_minorVersion = filemanger->readBigEndianUnsignedInteger();
    
    
    if( length > 8 )
    {
        length -= 8;
        
        while( length > 0 )
        {
            mainStream->read( brand, 4 );
            
            length -= 4;
            s       = new std::string( brand );
            
                box->_compatibleBrands.push_back( s );
        }
    }
    
};

void Processer::processData(Box * box , std::ifstream * mainStream, size_t length , FileManger * filemanger)
{
    
//    std::string * s;
//    char brand[ 5 ];
//    
//    
//    memset( brand, 0, 5 );
//    mainStream->read( brand, 4 );
//    
//    
//    
//    if( length > 8 )
//    {
//        length -= 8;
//        
//        while( length > 0 )
//        {
//            mainStream->read( brand, 4 );
//            
//            length -= 4;
//            s       = new std::string( brand );
//            
//            //    _compatibleBrands.push_back( s );
//        }
//    }
    
};




