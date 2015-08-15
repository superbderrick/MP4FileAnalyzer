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
    
    std::ifstream inFile("test1.mp4",std::ios::binary);
    
    fileManger = new FileManger(fileName ,&inFile);
    
    processer = new Processer;
    
    mBuilder = new TextBuilder;
    
    mBoxModel = new BoxModel;
    
    
   
   // todo : how to declare member file stream
   // startParsingData(fileManger, processer, &inFile);
    
    processer->start(fileManger, &inFile , mBoxModel);
    std::cout << "finish file read" << std::endl;
    // callback register have to do.
   
    std::cout << mBoxModel->hasChildren() << std::endl;
    
    mBuilder->setBoxData(mBoxModel);
   
    
};


Mp4Parser::Mp4Parser()
{
    delete fileManger;
    delete processer;
    delete mBuilder;
    delete mBoxModel;
};









