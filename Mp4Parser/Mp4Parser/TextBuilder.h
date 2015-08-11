//
//  TextBuilder.h
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__TextBuilder__
#define __Mp4Parser__TextBuilder__

#include <stdio.h>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <sstream>
#include "vector"



class TextBuilder{
public:
    TextBuilder();
    ~TextBuilder();
    
    void    setStream(std::string stream);
};


#endif /* defined(__Mp4Parser__TextBuilder__) */

