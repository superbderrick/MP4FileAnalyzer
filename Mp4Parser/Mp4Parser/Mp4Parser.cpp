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
    fileName = "normal.mp4";
    init(fileName);
};

Mp4Parser::~Mp4Parser()
{
    deletelibary();
};

void Mp4Parser::start()
{
    if (parser->start(inputFile, mBoxModel) == 1)
    {
        std::cout << SUCCESS << std::endl;
    }
    else
    {
        std::cout << FAILURE << std::endl;
    }
        

    // callback
   // mBuilder->setBoxData(mBoxModel);
};


void Mp4Parser::init(char * fileName)
{
    inputFile = new std::ifstream(fileName,std::ios::binary);
    fileManger = new StreamManger(fileName ,inputFile);
    parser = new Parser;
    mBuilder = new TextBuilder;
    mBoxModel = new BoxModel;
};

void Mp4Parser::deletelibary()
{
    delete fileManger;
    delete parser;
    delete mBuilder;
    delete mBoxModel;
    delete inputFile;
};









