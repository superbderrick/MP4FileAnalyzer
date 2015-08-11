//
//  FIleManger.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__FIleManger__
#define __Mp4Parser__FIleManger__

#include <stdio.h>
#include <fstream>
#include <iostream>

class FileManger
{
public:
    char * mFileName;
    std::ifstream * mFileStream;
    
    
    FileManger(char * fileName ,std::ifstream * mainStream );
    ~FileManger();
    
    uint32_t readBigEndianUnsignedInteger(std::ifstream * file);
    uint32_t readBigEndianUnsignedInteger();
    
    uint32_t readLittleEndianUnsignedInteger( void );

    std::istream & readBoxType(char * s, std::streamsize n);
    
    
};
#endif /* defined(__Mp4Parser__FIleManger__) */

