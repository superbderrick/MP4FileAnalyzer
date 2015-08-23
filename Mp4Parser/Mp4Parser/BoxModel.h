//
//  ContainerBox.h
//  Mp4Parser
//
//  Created by 강진영 on 8/13/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__ContainerBox__
#define __Mp4Parser__ContainerBox__

#include <stdio.h>
#include <stdio.h>
#include "Box.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <map>

#include <sstream>


class BoxModel
{
public:
   std::vector<Box *> BoxesVector;
    
    BoxModel();
    ~BoxModel();
};



#endif /* defined(__Mp4Parser__ContainerBox__) */

