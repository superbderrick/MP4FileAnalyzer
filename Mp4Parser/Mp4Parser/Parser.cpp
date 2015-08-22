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
    streamUtil = new StreamUtil();

};

Parser::~Parser()
{
    std::cout << " ~ Processer() iscalled; "<< std::endl;
    delete streamUtil;
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
        
        length = streamUtil->readBigEndianUnsignedInteger(fileStream);
        strcpy(type, streamUtil->readBoxType(fileStream));
        
        
        if (fileStream->eof() == true)
            break;
        
        if (
            strcmp(type, "dinf") == 0
            || strcmp(type, "edts") == 0
            || strcmp(type, "ipro") == 0
            || strcmp(type, "mdia") == 0
            || strcmp(type, "meta") == 0
            || strcmp(type, "mfra") == 0
            || strcmp(type, "minf") == 0
            || strcmp(type, "moof") == 0
            || strcmp(type, "moov") == 0
            || strcmp(type, "mvex") == 0
            || strcmp(type, "sinf") == 0
            || strcmp(type, "skip") == 0
            || strcmp(type, "stbl") == 0
            || strcmp(type, "traf") == 0
            || strcmp(type, "trak") == 0
            )
        {
            box = new Box(length, type, offset);
            offset = offset +8;
            fileStream->seekg((offset));
        }
        else
        {
            box = new Box(length, type, offset);
            offset = offset +length;
            fileStream->seekg(offset);
        }
        
        boxModel->BoxesVector.push_back(box);
        
        
    }

    return 1;
};





