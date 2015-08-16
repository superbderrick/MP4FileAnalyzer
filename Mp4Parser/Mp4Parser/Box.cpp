//
//  Box.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "Box.h"

Box::Box( void )
: mType("box")
, mSize(0)
{}

Box::~Box( void )
{}
//
//void Box::processData( FileManger * stream, size_t length )
//{
//    uint32_t data;
//    
//    ( void )length;
//    
//    //data = stream->readBigEndianUnsignedInteger();
//    data = 0;
//    
//    this->_version = data >> 24;
//    this->_flags   = data & 0x00FFFFFF;
//}