//
//  TextBuilder.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "TextBuilder.h"

TextBuilder::TextBuilder(){
    
};

TextBuilder::~TextBuilder(){
    
};

uint TextBuilder::makeTextfile(BoxModel * boxdata){
    
    std::string s;
    std::multimap< char *, std::string >::iterator it;
    std::ofstream outFile("output.txt");
    
    for (std::vector<int>::size_type i = 0; i < boxdata->BoxesVector.size(); ++i)
    {
        outFile << " Type: "  << boxdata->BoxesVector[i]->mType << std::endl;
        outFile << " Offset: " << boxdata->BoxesVector[i]->mOffset << std::endl;
        outFile << " Size:  " << boxdata->BoxesVector[i]->mSize<< " \n " << std::endl;
    }
    outFile.close();
    
    return 1;
    
}

