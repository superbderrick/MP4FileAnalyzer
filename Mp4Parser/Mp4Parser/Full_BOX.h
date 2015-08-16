//
//  Full_BOX.h
//  Mp4Parser
//
//  Created by 강진영 on 8/16/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__Full_BOX__
#define __Mp4Parser__Full_BOX__

#include <stdio.h>
#include "Box.h"
#include "FIleManger.h"

#endif /* defined(__Mp4Parser__Full_BOX__) */

class Full_BOX : public Box
{
    
public:
    uint8_t  _version;
    uint32_t _flags;
    std::string mBoxTitle;
    Full_BOX();
    ~Full_BOX();
    
     void processData(FileManger  * stream, size_t length );
};