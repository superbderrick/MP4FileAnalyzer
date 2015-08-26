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
#include <fstream>
#include <iostream>

//* config headers
#include "BaseParser.h"
#include "ParserConfig.h"

// inprotant headers
#include "TextBuilder.h"
#include "BoxModel.h"

#endif /* defined(__Mp4Parser__TempParser__) */

class Mp4Parser : BaseParser 
{
private:
    TextBuilder * mBuilder;
    BoxModel * mBoxModel;
    std::ifstream * inputFile;
    
    void init(char * fileName);
    void deletelibary();
public:
    
    Mp4Parser(char * fileName);
    Mp4Parser();
    ~Mp4Parser();
    
    // parser start.
    void start();

};