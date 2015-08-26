//
//  Box.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "Box.h"

Box::Box()
{
    
}

Box::Box(int size , std::string type , int offset)
{
    mSize = size;
    mType = type;
    mOffset = offset;
}

Box::~Box( void )
{
    
}

