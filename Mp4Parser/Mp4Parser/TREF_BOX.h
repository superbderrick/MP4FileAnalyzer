//
//  TREF_BOX.h
//  Mp4Parser
//
//  Created by 강진영 on 8/16/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__TREF_BOX__
#define __Mp4Parser__TREF_BOX__

#include <stdio.h>
#include "Box.h"

#endif /* defined(__Mp4Parser__TREF_BOX__) */

class TREF_BOX : public Box
{
    
public:
    std::string mBoxTitle;
    TREF_BOX();
    ~TREF_BOX();
};