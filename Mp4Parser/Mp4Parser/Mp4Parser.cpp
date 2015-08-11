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
    
    //Debug example test7.mp4
    std::ifstream inFile("test7.mp4",std::ios::binary);
    
    fileManger = new FileManger(fileName ,&inFile);
    processer = new Processer;
    
    mBuilder = new TextBuilder;
    
    //parsing start;
    startParsingData(fileName , fileManger , processer , &inFile);
    
};




Mp4Parser::Mp4Parser()
{
    delete fileManger;
    delete processer;
   
};


void Mp4Parser::startParsingData(char * fileName ,FileManger * filemanger , Processer * Processer , std::ifstream * mainStream)
{
    uint32_t             length;
    uint64_t             dataLength;
    char                 type[ BOXTYPE_NAME_SIZE ] ;
    
    memset( type, 0, BOXTYPE_NAME_SIZE );
    
    
    while (!mainStream->eof()) {
        length = filemanger->readBigEndianUnsignedInteger();
        dataLength = 0;
        
        
        filemanger->readBoxType( ( char * )type, 4 );
        
        if( length == 1 )
        {
            dataLength = filemanger->readBigEndianUnsignedInteger() - 16;
        }
        else
        {
            dataLength = length - 8;
        }


        
        Processer->createBox(type , mainStream ,dataLength ,  filemanger);
        break;
    }
    
    
    mainStream->close();
}


