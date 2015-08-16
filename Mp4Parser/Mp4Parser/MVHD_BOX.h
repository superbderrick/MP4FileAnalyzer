//
//  MVHD_BOX.h
//  Mp4Parser
//
//  Created by 강진영 on 8/16/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__MVHD_BOX__
#define __Mp4Parser__MVHD_BOX__

#include <stdio.h>
#include "Box.h"
#include <iostream>
#include <vector>
#include "math.h"
#include "stdint.h"
#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

#include "types.h"


#endif /* defined(__Mp4Parser__MVHD_BOX__) */

class MVHD_BOX : public Box
{
public:
    uint64_t mCreationTime;
    uint64_t mModificationTime;
    uint32_t mTimeScale;
    uint64_t mDuration;
    float    mRate;
    float    mVolume;
    matrix   mMatrix;
    uint32_t mNextTrackId;
    uint8_t  mVersion;
    uint32_t mFlags;
    
    MVHD_BOX();
    ~MVHD_BOX();
};