#include "config.h"
int32_t calcTemp(void)
{
   
    
   var1 = ((((adcT >> 3) - ((int32_t)T1 << 1))) *
          ((int32_t)T2)) >> 11;

  var2 = (((((adcT >> 4) - ((int32_t)T1)) *
            ((adcT >> 4) - ((int32_t)T1))) >> 12) *((int32_t)T3)) >>14;

  t_fine = var1 + var2;

   T = (t_fine * 5 + 128) >> 8;
  return T/100;
}