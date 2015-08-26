//
//  StreamUtil.h
//  Mp4Parser
//
//  Created by 강진영 on 8/22/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__StreamUtil__
#define __Mp4Parser__StreamUtil__

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <sstream>

#endif /* defined(__Mp4Parser__StreamUtil__) */

class StreamUtil
{
public:
    StreamUtil();
    ~StreamUtil();
    
    uint32_t readBigEndianUnsignedInteger(std::ifstream * file);
    char * readBoxType(std::ifstream * file);
};