/*
 * =====================================================================================
 *
 *       Filename:  ray_maths.h
 *
 *    Description:  Mathematical helpers
 *
 *        Version:  1.0
 *        Created:  28/12/12 02:06:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Raymon White, http://ilearnsum.blogspot.co.uk/ 
 *
 * =====================================================================================
 */
#ifndef __RAY_MATHS_H_INCLUDED__
#define __RAY_MATHS_H_INCLUDED__

namespace raymaths
{
  // Sum of natural numbers starting from 1 until N
  unsigned long sum_until(unsigned long N)
  {
   return 0.5 * N * (N+1);
  }

  // Sum  multiples until max.
  // i.e. multiples of 2 until 10 is 2+4+6+8+10
  unsigned long sum_of_multiples_until(unsigned multiple, unsigned max)
  {
   unsigned long new_max = max / multiple;
   return sum_until(new_max) * multiple;
  }

}

#endif

