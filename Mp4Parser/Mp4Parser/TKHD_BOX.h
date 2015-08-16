//
//  TKHD_BOX.h
//  Mp4Parser
//
//  Created by 강진영 on 8/16/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__TKHD_BOX__
#define __Mp4Parser__TKHD_BOX__

#include <stdio.h>
#include "Box.h"

#endif /* defined(__Mp4Parser__TKHD_BOX__) */

class TKHD_BOX : public Box
{
    
public:
    std::string mBoxTitle;
    TKHD_BOX();
    ~TKHD_BOX();
};