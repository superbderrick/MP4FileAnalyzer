//
//  FIleManger.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "FIleManger.h"
#include <fstream>
#include <iostream>

FileManger::FileManger(char * fileName)
{
    // init file referecne.
    std::ifstream inputFile(fileName,std::ios::binary);
    
    mFileName = fileName;
}

FileManger::~FileManger()
{
   
}


uint32_t FileManger::readBigEndianUnsignedInteger()
{
    
    uint8_t  c[ 4 ];
    uint32_t n;
    
    inputFile.read( ( char * )c, 4 );
    
    n = ( uint32_t )c[ 0 ] << 24
    | ( uint32_t )c[ 1 ] << 16
    | ( uint32_t )c[ 2 ] << 8
    | ( uint32_t )c[ 3 ];
    
    return n;
}