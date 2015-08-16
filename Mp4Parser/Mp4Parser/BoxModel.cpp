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
    std::ostringstream stringStream;
    if(strcmp(type, "ftyp") == 0 )
    {
        std::string boxData;
        std::string * eachData;
        std::vector< std::string * >::iterator boxVector;
       
        
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
        
    }
    else if (strcmp(type, "moov") == 0) {
        
         stringStream << "MP4 Box:  Container box         " << type << "\n";
        
         final =stringStream.str();
       
    }
    else if (strcmp(type, "mvhd") == 0) {
        
        stringStream << "MP4 Box:  movie header, overall declarations       " << type << "\n";
        
        final =stringStream.str();
        
    }
    else if (strcmp(type, "trak") == 0) {
        
        stringStream << "MP4 Box:  trak start       " << type << "\n";
        
        final =stringStream.str();
        
    }
    else if (strcmp(type, "trhd") == 0) {
        
        stringStream << "MP4 Box:  trak header       " << type << "\n";
        
        final =stringStream.str();
        
    }
    else if (strcmp(type, "tref") == 0) {
        
        stringStream << "MP4 Box:  tref, tref      " << type << "\n";
        
        final =stringStream.str();
        
    }
    else if (strcmp(type, "mdia") == 0) {
        
        stringStream << "MP4 Box:  mdia start       " << type << "\n";
        
        final =stringStream.str();
        
    }
    
    else if (strcmp(type, "mdhd") == 0) {
        
        stringStream << "MP4 Atom:           " <<  type << "\n";
        stringStream << "                      - Creation time:     " << ((MDHD_BOX *)box)->mCreationTime     << "\n";
        stringStream << "                      - Modification time: " << ((MDHD_BOX *)box)->mModificationTime << "\n";
        stringStream << "                      - Time scale:        " << ((MDHD_BOX *)box)->mTimeScale        << "\n";
        stringStream << "                      - Duration:          " << ((MDHD_BOX *)box)->mDuration         << "\n";
        stringStream << "                      - Language:          " << ((MDHD_BOX *)box)->mLanguage     << "\n";
        
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


