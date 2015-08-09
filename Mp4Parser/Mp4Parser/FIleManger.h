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

#endif /* defined(__Mp4Parser__FIleManger__) */

class FileManger 
{
public:
    char * mFileName;
    std::ifstream inputFile;
    
    
    FileManger(char * fileName);
    ~FileManger();
    
    uint32_t readBigEndianUnsignedInteger();
};