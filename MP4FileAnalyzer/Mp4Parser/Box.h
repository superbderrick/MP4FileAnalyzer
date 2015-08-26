//
//  Box.h
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__Box__
#define __Mp4Parser__Box__

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <fstream>


class Box {
    
public:
    
    std::string mType;
    int mSize;
    int mOffset;
    
    Box();
    Box(int size , std::string type , int offset);
    
    ~Box( );
    
};

#endif /* defined(__Mp4Parser__Box__) */

