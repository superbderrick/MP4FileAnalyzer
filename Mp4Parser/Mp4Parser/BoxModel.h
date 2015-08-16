//
//  ContainerBox.h
//  Mp4Parser
//
//  Created by 강진영 on 8/13/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__ContainerBox__
#define __Mp4Parser__ContainerBox__

#include <stdio.h>
#include <stdio.h>
#include "Box.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <map>

#include <sstream>
#include "FTYP_BOX.h"
#include "MDHD_BOX.h"
//#include "ContainerBox.h"

class BoxModel
{
public:
    std::multimap< char *, std::string >  boxDataMap;
    
    std::multimap< std::string, std::string > _children;
    BoxModel();
    ~BoxModel();
    
    void  extractData( Box * box , char *type );
    bool hasChildren( void );
    unsigned int numberOfChildren( void );
    
    
};



#endif /* defined(__Mp4Parser__ContainerBox__) */

