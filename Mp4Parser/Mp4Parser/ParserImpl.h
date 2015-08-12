//
//  ParserImpl.h
//  Mp4Parser
//
//  Created by 강진영 on 8/12/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__ParserImpl__
#define __Mp4Parser__ParserImpl__

#include <stdio.h>
#include "Processer.h"

#endif /* defined(__Mp4Parser__ParserImpl__) */

class ParserImpl{
public:
    virtual void startParsingData(FileManger * filemanger , Processer * Processer , std::ifstream * mainStream) = 0;
};