/* Test the `vcombinep8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vcombinep8 (void)
{
  poly8x16_t out_poly8x16_t;
  poly8x8_t arg0_poly8x8_t;
  poly8x8_t arg1_poly8x8_t;

  out_poly8x16_t = vcombine_p8 (arg0_poly8x8_t, arg1_poly8x8_t);
}
