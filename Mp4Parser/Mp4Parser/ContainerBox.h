//
//  ContainerBox.h
//  Mp4Parser
//
//  Created by 강진영 on 8/16/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__ContainerBox__
#define __Mp4Parser__ContainerBox__

#include <stdio.h>
#include "Box.h"

#endif /* defined(__Mp4Parser__ContainerBox__) */

class ContainerBox : public Box
{
    
public:
    std::string mContainerBoxTitle;
    ContainerBox();
    ~ContainerBox();
};