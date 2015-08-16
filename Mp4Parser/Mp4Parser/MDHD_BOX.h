//
//  MDHD_BOX.h
//  Mp4Parser
//
//  Created by 강진영 on 8/16/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__MDHD_BOX__
#define __Mp4Parser__MDHD_BOX__

#include <stdio.h>
#include "Box.h"



class MDHD_BOX : public Box
{
    
public:
    uint64_t      mCreationTime;
    uint64_t      mModificationTime;
    uint32_t      mTimeScale;
    uint32_t      mDuration;
    std::string * mLanguage;
    
    uint8_t  mVersion;
    uint32_t mFlags;
    
    
    
    std::string mBoxTitle;
    MDHD_BOX();
    ~MDHD_BOX();
};







#endif /* defined(__Mp4Parser__MDHD_BOX__) */

