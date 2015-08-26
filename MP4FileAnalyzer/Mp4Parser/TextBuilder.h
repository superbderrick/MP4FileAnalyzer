//
//  TextBuilder.h
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__TextBuilder__
#define __Mp4Parser__TextBuilder__

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "vector"
#include "BoxModel.h"
#include <sstream>


class TextBuilder{
public:
    TextBuilder();
    ~TextBuilder();
    
    uint  makeTextfile(BoxModel * boxData);
};


#endif /* defined(__Mp4Parser__TextBuilder__) */

