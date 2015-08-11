//
//  TempParser.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "TempParser.h"
#include <fstream>
#include <iostream>




TempParser::TempParser(char * fileName)
{
    fileManger = new FileManger(fileName);
    
    parser = new Parser;
    
    
    //parsing start;
    startParsingData(fileName , fileManger , parser);
    
};

TempParser::~TempParser()
{
    delete fileManger;
    delete parser;
};


void TempParser::startParsingData(char * fileName , FileManger * filemanger , Parser * parser)
{
    // file stream open.
    
    std::ifstream inFile(fileName,std::ios::binary);
    
    // length box
    uint32_t             length;
    
    // if lengh == 1 Data length will have a extended value, Default is 0
    uint64_t             dataLength;
    
    //type
    char                 type[ 5 ];
    
    
    while (!inFile.eof()) {
       
        // calculater whole box size
        
        length = filemanger->readBigEndianUnsignedInteger();
  
        std::cout << length << std::endl;
        
        
        
        
    }
    inFile.close();
}


