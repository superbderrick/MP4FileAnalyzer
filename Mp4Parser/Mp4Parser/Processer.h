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
#include "StreamManger.h"
#include "TextBuilder.h"
#include "BoxModel.h"

// Boxes data headers
#include "FTYP_BOX.h"
//#include "ContainerBox.h"


#include "MDHD_BOX.h"

#include "Full_BOX.h"

class Processer
{
    
private:
   
    void readDataBox(Box * box , char *type,std::ifstream * mainStream, size_t length , StreamManger * filemanger);
    void readContainerBox(ContainerBox * box ,std::ifstream * mainStream, size_t length , StreamManger * filemanger);
    
public:
    Processer();
    ~Processer();
    
    
    
    std::string getDescription( std::string _majorBrand , uint32_t _minorVersion );
    
    void start(StreamManger * filemanger, std::ifstream * mainStream , BoxModel * boxModel);
    
};







#endif /* defined(__Mp4Parser__Parser__) */


