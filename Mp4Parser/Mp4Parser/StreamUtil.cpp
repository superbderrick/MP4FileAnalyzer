//
//  StreamUtil.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/22/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "StreamUtil.h"

StreamUtil::StreamUtil()
{
    
};

StreamUtil::~StreamUtil()
{
    
};

uint32_t StreamUtil::readBigEndianUnsignedInteger(std::ifstream *file)
{
    uint8_t  c[ 4 ];
    uint32_t n;
    
    file->read( ( char * )c, 4 );
    
    n = ( uint32_t )c[ 0 ] << 24
    | ( uint32_t )c[ 1 ] << 16
    | ( uint32_t )c[ 2 ] << 8
    | ( uint32_t )c[ 3 ];
    
    return n;
};

char * StreamUtil::readBoxType(std::ifstream *file)
{
    
        char * typeBuf = new char[5];
        file->read(typeBuf,4);
        return typeBuf;
};

