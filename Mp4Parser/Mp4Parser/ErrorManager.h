//
//  ErrorManager.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__ErrorManager__
#define __Mp4Parser__ErrorManager__

#include <stdio.h>
#include <map>
#include <string>

#endif /* defined(__Mp4Parser__ErrorManager__) */

class ErrorManager{
    
public:
    
    ErrorManager();
    void showErrorMessage(int num);
    
private:
    
    
    std::map< int, int > guideMap;
    void initStringTable();
    void init();
};