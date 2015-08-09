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
#include "TempParser.h"

// default valuse
int Option::option_num = 3;


int main(int argc, const char * argv[]) {
    
    UtilManger * utilManger = new UtilManger;
    
    // temp comment for debuging later I have to make some module that can do option for program  .
    char fileName[10];
    
    //strcpy(fileName,argv[1]);

   
    
    // just error manger
    
//    if(Option::option_num > argc)
//    {
//        utilManger->errorManger->showErrorMessage(1);
//        return 0;
//    }
    
    
    // I have to change name later to mp4 parser 
     TempParser * tempParser = new TempParser(fileName);
   
    
    
    
    
    
    
    
    
    return 0;
}



