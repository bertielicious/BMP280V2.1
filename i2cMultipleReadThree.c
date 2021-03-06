#include "config.h"
#include "i2cSingleReadSequence.h"
uint32_t i2cMultipleReadThree(uint8_t regAddr)
{
    uint8_t msb, lsb, xlsb;
    uint32_t temp;
    msb = i2cSingleReadSequence(regAddr);
    __delay_ms(100);
    lsb = i2cSingleReadSequence(regAddr + 1);
     __delay_ms(100);
    xlsb = i2cSingleReadSequence(regAddr + 2);
     __delay_ms(100);
    regMsb = msb;
    regLsb = lsb;
    regxLsb = xlsb;
    temp = ((msb<<12) | (lsb<<4) | (xlsb>>4));
    return temp;
}
