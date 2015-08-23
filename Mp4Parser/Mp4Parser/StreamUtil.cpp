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
    uint32_t * tt = new uint32_t;
    
    file->read( ( char * )c, 4 );
    
    n = ( uint32_t )c[ 0 ] << 24
    | ( uint32_t )c[ 1 ] << 16
    | ( uint32_t )c[ 2 ] << 8
    | ( uint32_t )c[ 3 ];
    
    tt = &n;
    return *tt;
};

char * StreamUtil::readBoxType(std::ifstream *file)
{
    
        char * typeBuf = new char[5];
        file->read(typeBuf,4);
        return typeBuf;
};

