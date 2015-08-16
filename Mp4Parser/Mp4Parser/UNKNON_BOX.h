//
//  UNKNON_BOX.h
//  Mp4Parser
//
//  Created by 강진영 on 8/16/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__UNKNON_BOX__
#define __Mp4Parser__UNKNON_BOX__

#include <stdio.h>
#include "Box.h"

#endif /* defined(__Mp4Parser__UNKNON_BOX__) */

class UNKNON_BOX : public Box
{
    
public:
    std::string mBoxTitle;
    UNKNON_BOX(void);
    UNKNON_BOX(char * title);
    ~UNKNON_BOX();
};