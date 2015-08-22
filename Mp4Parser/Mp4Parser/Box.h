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
#include "StreamManger.h"





class Box {
    
protected:

public:
    
    std::string mType;
    int mSize;
    std::string mParsingType;
    
    uint8_t  _version;
    uint32_t _flags;
    
    Box();
    virtual ~Box( void );
//    void processData( FileManger * stream, size_t length );
    
   
    
};

#endif /* defined(__Mp4Parser__Box__) */

