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
#include "ParserConfig.h"
#include "TextBuilder.h"
#include "ParserImpl.h"
#include <fstream>
#include <iostream>

#endif /* defined(__Mp4Parser__TempParser__) */
class Mp4Parser : BaseParser , ParserImpl
{
private:
    TextBuilder * mBuilder;
    
    virtual void startParsingData(FileManger * filemanger , Processer * Processer , std::ifstream * mainStream);
public:
    Mp4Parser(char * fileName);
    Mp4Parser();
    
    // parser start.
    void start();
};