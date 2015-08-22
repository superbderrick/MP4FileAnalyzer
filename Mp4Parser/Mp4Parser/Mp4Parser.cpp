//
//  TempParser.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "Mp4Parser.h"

Mp4Parser::Mp4Parser(char * fileName)
{
    fileName = "test7.mp4";
    init(fileName);
};

Mp4Parser::~Mp4Parser()
{
    deletelibary();
};

void Mp4Parser::start()
{
    int result = 0;
    if (parser->start(inputFile, mBoxModel) == 1)
    {
        result = 1;
        std::cout << SUCCESS << std::endl;
    }
    else
    {
        result = 0;
        std::cout << FAILURE << std::endl;
    }
        

    // callback
    
    if(result == 1)
    {
      mBuilder->makeTextfile(mBoxModel);
    }
    
};


void Mp4Parser::init(char * fileName)
{
    inputFile = new std::ifstream(fileName,std::ios::binary);
    parser = new Parser;
    mBuilder = new TextBuilder;
    mBoxModel = new BoxModel;
};

void Mp4Parser::deletelibary()
{
    delete parser;
    delete mBuilder;
    delete mBoxModel;
    delete inputFile;
};









