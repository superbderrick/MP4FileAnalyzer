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
    std::cout << "Mp4Parser called " << std::endl;
    std::cout << fileName << std::endl;
    
    init(fileName);
};

Mp4Parser::~Mp4Parser()
{
    deletelibary();
};

void Mp4Parser::start()
{
     std::cout << " mp4 parser start " << std::endl;
    
    int result = 0;
    
    if (mParser->start(inputFile, mBoxModel) == 1)
    {
        result = SUCCESS;
        std::cout << SUCCESS << std::endl;
    }
    else
    {
        result = FAILURE;
        std::cout << FAILURE << std::endl;
    }
    
        

    // callback
    
    if(result == SUCCESS)
    {
      mBuilder->makeTextfile(mBoxModel);
    }
    
};


void Mp4Parser::init(char * fileName)
{
    inputFile = new std::ifstream(fileName,std::ios::binary);
    mParser = new Parser;
    mBuilder = new TextBuilder;
    mBoxModel = new BoxModel;
};

void Mp4Parser::deletelibary()
{
    std::cout << "deleteLib" << std::endl;
    delete mParser;
    delete mBuilder;
    delete mBoxModel;
    delete inputFile;
};









