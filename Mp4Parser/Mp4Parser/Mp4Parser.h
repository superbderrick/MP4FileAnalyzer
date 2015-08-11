//
//  TempParser.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__TempParser__
#define __Mp4Parser__TempParser__

#include <stdio.h>
#include "BaseParser.h"

#endif /* defined(__Mp4Parser__TempParser__) */
class TempParser : BaseParser
{
public:
    //char* mFilepath;
    
    TempParser(char * fileName);
    ~TempParser();
    
    // parser start.
    void startParsingData(char * fileName , FileManger * , Parser *);
};