//
//  main.cpp
//  Mp4Parser
//
//  Created by 강진영 ,Derrick on 8/6/15.
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
    
    Mp4Parser * mp4Parser = new Mp4Parser("test1.mp4");
    
    mp4Parser->start();
    
    exit(1);
    return 0;
}





