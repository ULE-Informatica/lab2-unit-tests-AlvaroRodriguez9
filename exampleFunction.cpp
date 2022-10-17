#include <math.h>
#include <limits.h>
#include <stdio.h>
#include <stdint.h> 


unsigned int wrapFunctionAdd(unsigned int ui_a, unsigned int ui_b) {
  unsigned int usum; 
  if (UINT_MAX - ui_a < ui_b){
    printf("Los números introducidos producen wrap\n");
    return 0;
  } else {
    usum = ui_a + ui_b;
  }
  return usum;
}

unsigned int wrapFunctionMul(unsigned int ui_a, unsigned int ui_b) {
  unsigned umul = ui_a;
  if (ui_a > UINT_MAX / ui_b){
    printf("Los números introducidos producen wrap\n");
    return 0;
  } else {
    umul *= ui_b;
  }
  return umul;
}

uint32_t wrapFunctionShift(uint32_t ui_a, unsigned int ui_b) {
  uint32_t uShift;
  if (ui_b >= UINT_MAX){
    printf("Los números introducidos producen wrap\n");
  } else {
    uShift = ui_a << ui_b | ui_a >> (32 - ui_b);
  } 
  return uShift;
}
