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
#include "ParserConfig.h"
#include "Box.h"
#include "FIleManger.h"
#include "TextBuilder.h"
#include "BoxModel.h"

// Boxes data headers
#include "FTYP_BOX.h"
#include "ContainerBox.h"

class Processer
{
    
private:
   
    void processData(Box * box , char *type,std::ifstream * mainStream, size_t length , FileManger * filemanger);
    
public:
    Processer();
    ~Processer();
    
    
    
    std::string getDescription( std::string _majorBrand , uint32_t _minorVersion );
    
    void start(FileManger * filemanger, std::ifstream * mainStream , BoxModel * boxModel);
    
};







#endif /* defined(__Mp4Parser__Parser__) */


