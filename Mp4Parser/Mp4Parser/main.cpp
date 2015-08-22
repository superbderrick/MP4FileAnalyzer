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
    
    char fileName[10];
    
    if( argc != 2 )
    {
        std::cout << "Usage: " << argv[ 0 ] << " FILENAME\n";
    }
    
     strcpy(fileName,argv[1]);
    
   
    
    Mp4Parser * mp4Parser = new Mp4Parser(fileName);
    
    mp4Parser->start();
    
    
    return 0;
}





