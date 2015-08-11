//
//  Parser.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__Parser__
#define __Mp4Parser__Parser__

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "vector"

#include "Box.h"
#include "FIleManger.h"
#include "FTYP_BOX.h"
#include "TextBuilder.h"
#endif /* defined(__Mp4Parser__Parser__) */


class Processer
{
    
private:
    
    TextBuilder * textBuilder ;
    
    std::string getData(char *type, std::string _majorBrand, uint32_t _minorVersion, std::vector< std::string * > _compatibleBrands);
    void processData(Box * box , std::ifstream * mainStream, size_t length , FileManger * filemanger);
    
    void processData(FTYP_BOX * box , std::ifstream * mainStream, size_t length , FileManger * filemanger);
    
public:
    Processer();
    ~Processer();
    
   
    
    std::string getDescription( std::string _majorBrand , uint32_t _minorVersion );
    
    void createBox(char * type , std::ifstream * mainStream, size_t length, FileManger * filemanger );
    
  
    
};