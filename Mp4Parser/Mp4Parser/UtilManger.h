//
//  UtilManger.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__UtilManger__
#define __Mp4Parser__UtilManger__

#include <stdio.h>
#include <iostream>
#include "ErrorManager.h"
#include "Option.h"



#endif /* defined(__Mp4Parser__UtilManger__) */



class UtilManger
{
    
private:
    
public:
    Option * sampleOption;
    ErrorManager * errorManger;
    
    UtilManger();
    ~UtilManger();
    
};

//int UtilManger::commmand_num = 3;



