//
//  main.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/6/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "UtilManger.h"
#include "Mp4Parser.h"

// default valuse
int Option::option_num = 3;


int main(int argc, const char * argv[]) {
    
    UtilManger * utilManger = new UtilManger;
    Mp4Parser * Mp4Parser = Mp4Parser;
    
    
    
    //debug
    //argc = 2;
    
    if(Option::option_num > argc)
    {
        utilManger->errorManger->showErrorMessage(1);
        return 0;
    }
    
    
    
    
    
    
    
    return 0;
}



