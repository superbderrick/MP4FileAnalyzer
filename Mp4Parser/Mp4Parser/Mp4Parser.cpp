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
    
    
   

    
    processer->start(fileManger, &inFile , mBoxModel);
    
  
    
    mBuilder->setBoxData(mBoxModel);
   
    
};


Mp4Parser::Mp4Parser()
{
    delete fileManger;
    delete processer;
    delete mBuilder;
    delete mBoxModel;
};









