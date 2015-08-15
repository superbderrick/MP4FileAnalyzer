//
//  ContainerBox.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/13/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "BoxModel.h"

BoxModel::BoxModel()
{
    
};

BoxModel::~BoxModel()
{
    
};


void BoxModel::extractData(Box *box ,char *type) {
    std::string final ;
    if(strcmp(type, "ftyp") == 0 )
    {
        std::string boxData;
        std::string * eachData;
        std::vector< std::string * >::iterator boxVector;
        std::ostringstream stringStream;
        
        stringStream << "MP4 Box:           " << type << "\n";
        stringStream << "                      - Major brand:       " <<  ((FTYP_BOX *)box)->_majorBrand << "\n";
        stringStream << "                      - Minor version:     " <<  ((FTYP_BOX *)box)->_minorVersion << "\n";
        stringStream << "                      - Compatible brands: \n";
        
        boxData = stringStream.str();
        
        for( boxVector =  ((FTYP_BOX *)box)->_compatibleBrands.begin(); boxVector != ((FTYP_BOX *)box)->_compatibleBrands.end(); ++boxVector )
        {
            eachData = *( boxVector );
            
            stringStream << "                          - " << *( eachData ) << "\n";
        }
        
        final = stringStream.str();
        
    } else if (strcmp(type, "moov") == 0) {
         std::ostringstream stringStream;
         stringStream << "MP4 Box:  Container start         " << type << "\n";
        
         final =stringStream.str();
       
    }
    
    boxDataMap.insert(std::pair< char *, std::string >(type, final ) );
    
};

bool BoxModel::hasChildren(void)
{
    return true;
};


unsigned int  BoxModel::numberOfChildren(void)
{
    return boxDataMap.size();
};


