//
//  FIleManger.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__FIleManger__
#define __Mp4Parser__FIleManger__

#include <stdio.h>
#include <fstream>
#include <iostream>

#include "math.h"
#include "stdint.h"
#include "types.h"

//

class StreamManger
{
public:
    char * mFileName;
    std::ifstream * mFileStream;
    
     std::ifstream stream;
    
    StreamManger(char * fileName ,std::ifstream * mainStream );
    StreamManger();
    
    uint32_t readBigEndianUnsignedInteger(std::ifstream * file);
    uint32_t readBigEndianUnsignedInteger();
    
    uint32_t readLittleEndianUnsignedInteger( void );
    
    uint64_t readBigEndianUnsignedLong( void );

    std::istream & readBoxType(char * s, std::streamsize n);
    
    
    float readBigEndianFixedPoint( unsigned int integerLength, unsigned int fractionalLength );
    float readLittleEndianFixedPoint( unsigned int integerLength, unsigned int fractionalLength );
    
    uint16_t readBigEndianUnsignedShort( void );
    uint16_t readLittleEndianUnsignedShort( void );
    
    
    std::istream & ignore( std::streamsize n = 1, int delim = EOF );
    
    void readMatrix( matrix * m );
    
   std::string * readBigEndianISO639Code( void );
};
#endif /* defined(__Mp4Parser__FIleManger__) */

