/*

Copyright (c) 2016 OSTA

This header file is a function used to transcode number on LED into hexadecimal number for MCU.

Usage: Use "OSTALED(<target number>);" to return result without dot. Use "OSTALEDD(<target number>);" to return result with dot.

Contact us: http://www.jluosta.org

Address: Jilin University, Changchun, Jilin Province, China

*/


int OSTALED(int input)
{
    if(input == 0)
    return 0x3F;
    if(input == 1)
    return 0x06;
    if(input == 2)
    return 0x5B;
    if(input == 3)
    return 0x4F;
    if(input == 4)
    return 0x66;
    if(input == 5)
    return 0x6D;
    if(input == 6)
    return 0x7D;
    if(input == 7)
    return 0x07;
    if(input == 8)
    return 0x7F;
    if(input == 9)
    return 0x6F;
}


int OSTALEDD(int input)
{
    if(input == 0)
    return 0xBF;
    if(input == 1)
    return 0x86;
    if(input == 2)
    return 0xDB;
    if(input == 3)
    return 0xCF;
    if(input == 4)
    return 0xE6;
    if(input == 5)
    return 0xED;
    if(input == 6)
    return 0xFD;
    if(input == 7)
    return 0x87;
    if(input == 8)
    return 0xFF;
    if(input == 9)
    return 0xEF;
}
