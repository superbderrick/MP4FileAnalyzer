//
//  Parser.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__Parser__
#define __Mp4Parser__Parser__

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "vector"
#include "ParserConfig.h"
#include "Box.h"
#include "TextBuilder.h"
#include "BoxModel.h"

#include "StreamUtil.h"
// Boxes data headers


class Parser
{
    
private:
    StreamUtil * streamUtil;
public:
    Parser();
    ~Parser();
    
    uint start(std::ifstream * mainStream , BoxModel * boxModel);
    
};







#endif /* defined(__Mp4Parser__Parser__) */


