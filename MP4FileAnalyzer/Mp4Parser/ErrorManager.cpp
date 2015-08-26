//
//  ErrorManager.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "ErrorManager.h"

#include <iostream>

#define INVALID_ARGUMENT 1
#define REQUEST_INTPUT 2

std::map< int, std::string > errorTable;

ErrorManager::ErrorManager()
{
    init();
}

ErrorManager::~ErrorManager()
{
    
}
void ErrorManager::init()
{
    initStringTable();
};

void ErrorManager::initStringTable()
{
    // Inputs guide strings
    if(errorTable.empty())
    {
        errorTable.insert(std::pair<int, std::string>(INVALID_ARGUMENT, "This is Invalid argument"));
        errorTable.insert(std::pair<int, std::string>(REQUEST_INTPUT, "Plese Input again !"));
    }
    
    
    
};

void ErrorManager::showErrorMessage(int num)
{
  
    std::cout <<  errorTable[num] << std::endl;
    
};