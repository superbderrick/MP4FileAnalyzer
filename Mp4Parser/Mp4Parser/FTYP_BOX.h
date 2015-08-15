//
//  FTYP_BOX.h
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__FTYP_BOX__
#define __Mp4Parser__FTYP_BOX__

#include <stdio.h>
#include "Box.h"
#include <fstream>
#include <iostream>
#include <vector>

class FTYP_BOX :public Box
{
    
public:
    
    std::string _majorBrand;
    uint32_t _minorVersion;
    std::vector< std::string * > _compatibleBrands;
    
    FTYP_BOX();
    ~FTYP_BOX();
};


#endif /* defined(__Mp4Parser__FTYP_BOX__) */

