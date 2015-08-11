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


typedef struct _Box
{
    char* pType;
    int nSize;
    _Box* pNext;
} tempBox;



class Box {
    
protected:

public:
    
    std::string mType;
    int mSize;
    std::string mParsingType;
    
    Box();
    virtual ~Box( void );
    
   
    
};

#endif /* defined(__Mp4Parser__Box__) */

