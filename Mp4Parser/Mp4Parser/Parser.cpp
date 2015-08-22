//
//  Parser.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "Parser.h"

Parser::Parser()
{
    std::cout << "Processer() iscalled; "<< std::endl;

};

Parser::~Parser()
{
    std::cout << " ~ Processer() iscalled; "<< std::endl;
  
};

/////////////////////////////-----------------------------------/////////////////////////////////////////////Parsing Logic to check what Boxes from file.

uint Parser::start(std::ifstream * fileStream , BoxModel * boxModel)
{
    uint32_t             offset = 0;
    uint32_t             length;
    char                 type[ BOXTYPE_NAME_SIZE ] ;
    Box * box;

    
    memset( type, 0, BOXTYPE_NAME_SIZE );
    
    while (! fileStream->eof()) {
        //length =

    }

    return 1;
};





