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
    
    //    inFile (fileName,std::ios::binary);
    inFile = new std::ifstream(fileName,std::ios::binary);
    fileManger = new StreamManger(fileName ,inFile);
    processer = new Processer;
    mBuilder = new TextBuilder;
    mBoxModel = new BoxModel;
    
    std::cout << fileName << std::endl;
    
};


Mp4Parser::Mp4Parser()
{
    delete fileManger;
    delete processer;
    delete mBuilder;
    delete mBoxModel;
};

void Mp4Parser::start()
{
    processer->start(fileManger, inFile , mBoxModel);
    
    // callback
    mBuilder->setBoxData(mBoxModel);
};










