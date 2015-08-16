//
//  FIleManger.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "FIleManger.h"

FileManger::FileManger(char * fileName ,std::ifstream * mainStream)
{
    mFileStream = mainStream;
    
}

FileManger::~FileManger()
{
    
}


uint32_t FileManger::readBigEndianUnsignedInteger(std::ifstream * file)
{
    
    uint8_t  c[ 4 ];
    uint32_t n;
    
    file->read( ( char * )c, 4 );
    
    n = ( uint32_t )c[ 0 ] << 24
    | ( uint32_t )c[ 1 ] << 16
    | ( uint32_t )c[ 2 ] << 8
    | ( uint32_t )c[ 3 ];
    
    return n;
}

uint32_t FileManger::readBigEndianUnsignedInteger()
{
    
    uint8_t  block[ 4 ];
    uint32_t wholeblock;
    
    mFileStream->read( ( char * )block, 4 );
    
    wholeblock = ( uint32_t )block[ 0 ] << 24
    | ( uint32_t )block[ 1 ] << 16
    | ( uint32_t )block[ 2 ] << 8
    | ( uint32_t )block[ 3 ];
  
    
    return wholeblock;
}

uint32_t FileManger::readLittleEndianUnsignedInteger( void )
{
    uint8_t  c[ 4 ];
    uint32_t n;
    
    mFileStream->read( ( char * )c, 4 );
    
    n = ( uint32_t )c[ 3 ] << 24
    | ( uint32_t )c[ 2 ] << 16
    | ( uint32_t )c[ 1 ] << 8
    | ( uint32_t )c[ 0 ];
    
    return n;
};

uint64_t FileManger::readBigEndianUnsignedLong( void )
{
    uint8_t  c[ 8 ];
    uint64_t n;
    
    mFileStream->read( ( char * )c, 8 );
    
    n = ( uint64_t )c[ 0 ] << 56
    | ( uint64_t )c[ 1 ] << 48
    | ( uint64_t )c[ 2 ] << 40
    | ( uint64_t )c[ 3 ] << 32
    | ( uint64_t )c[ 4 ] << 24
    | ( uint64_t )c[ 5 ] << 16
    | ( uint64_t )c[ 6 ] << 8
    | ( uint64_t )c[ 7 ];
    
    return n;
}




float FileManger::readBigEndianFixedPoint( unsigned int integerLength, unsigned int fractionalLength )
{
    uint32_t n;
    unsigned int integer;
    unsigned int fractionalMask;
    unsigned int fractional;
    
    if( integerLength + fractionalLength == 16 )
    {
        n = readBigEndianUnsignedShort();
    }
    else
    {
        n = this->readBigEndianUnsignedInteger();
    }
    
    integer        = n >> fractionalLength;
    fractionalMask = pow( 2, fractionalLength ) - 1;
    fractional     = ( n & fractionalMask ) / ( 1 << fractionalLength );
    
    return integer + fractional;
}

float FileManger::readLittleEndianFixedPoint( unsigned int integerLength, unsigned int fractionalLength )
{
    uint32_t n;
    unsigned int integer;
    unsigned int fractionalMask;
    unsigned int fractional;
    
    if( integerLength + fractionalLength == 16 )
    {
        n = readLittleEndianUnsignedShort();
    }
    else
    {
        n = this->readLittleEndianUnsignedInteger();
    }
    
    integer        = n >> fractionalLength;
    fractionalMask = pow( 2, fractionalLength ) - 1;
    fractional     = ( n & fractionalMask ) / ( 1 << fractionalLength );
    
    return integer + fractional;
}

uint16_t FileManger::readBigEndianUnsignedShort( void )
{
    uint8_t  c[ 2 ];
    uint16_t n;
    
    mFileStream->read( ( char * )c, 2 );
    
    n = ( uint16_t )c[ 0 ] << 8
    | ( uint16_t )c[ 1 ];
    
    return n;
}

uint16_t FileManger::readLittleEndianUnsignedShort( void )
{
    uint8_t  c[ 2 ];
    uint16_t n;
    
    mFileStream->read( ( char * )c, 2 );
    
    n = ( uint16_t )c[ 1 ] << 8
    | ( uint16_t )c[ 0 ];
    
    return n;
}



std::istream & FileManger::readBoxType(char * s, std::streamsize streamSize )
{
    return mFileStream->read( s,streamSize);
  
    
}

std::istream & FileManger::ignore( std::streamsize n, int delim )
{
    return stream.ignore( n, delim );
}


void FileManger::readMatrix( matrix * m )
{
    m->a = this->readBigEndianFixedPoint( 16, 16 );
    m->b = this->readBigEndianFixedPoint( 16, 16 );
    m->u = this->readBigEndianFixedPoint(  2, 30 );
    m->c = this->readBigEndianFixedPoint( 16, 16 );
    m->d = this->readBigEndianFixedPoint( 16, 16 );
    m->v = this->readBigEndianFixedPoint(  2, 30 );
    m->x = this->readBigEndianFixedPoint( 16, 16 );
    m->y = this->readBigEndianFixedPoint( 16, 16 );
    m->w = this->readBigEndianFixedPoint(  2, 30 );
}

std::string * FileManger::readBigEndianISO639Code( void )
{
    unsigned char c1;
    unsigned char c2;
    unsigned char c3;
    uint16_t      n;
    std::string * s;
    
    s = new std::string();
    n = this->readBigEndianUnsignedShort();
    
    c1 = ( n & 0x7C00 ) >> 10;  // Mask is 0111 1100 0000 0000
    c2 = ( n & 0x03E0 ) >> 5;   // Mask is 0000 0011 1110 0000
    c3 = ( n & 0x001F );        // Mask is 0000 0000 0001 1111
    
    c1 += 0x60;
    c2 += 0x60;
    c3 += 0x60;
    
    s->append( ( char * )&c1, 1 );
    s->append( ( char * )&c2, 1 );
    s->append( ( char * )&c3, 1 );
    
    return s;
}

