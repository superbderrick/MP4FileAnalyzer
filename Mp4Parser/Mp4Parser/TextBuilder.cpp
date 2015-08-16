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

void TextBuilder::setBoxData(BoxModel * boxdata){
    
    std::string s;
    std::multimap< char *, std::string >::iterator it;
    std::ofstream outFile("output.txt");

    for( it = boxdata->boxDataMap.begin(); it != boxdata->boxDataMap .end(); ++it )
    {
        //debug
      //  std::cout << it->second<< std::endl;
        outFile << it->second<<std::endl;
    }
    
    outFile.close();

    
}

