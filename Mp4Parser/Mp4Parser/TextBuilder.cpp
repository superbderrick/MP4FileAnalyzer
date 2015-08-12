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

void TextBuilder::setStream(std::string stream){
 
    std::string input;
    input = stream;
    
    std::cin >> input;
    std::ofstream out("output.txt");
    out << stream;
    out.close();
    exit(0);
}
