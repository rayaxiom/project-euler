/*
 * =====================================================================================
 *
 *
 *    Description:  http://projecteuler.net/problem=1
 *
 *        Version:  1.0
 *        Created:  27/12/12 22:05:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Raymon White, 
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "ray_maths.h"

// Find the sum of all the multiples of 3 or 5 below 1000.
int main(int argc, char* argv[])
{
  unsigned long max = 1000-1; // BELOW 1000
  unsigned long answer = raymaths::sum_of_multiples_until(3,max) 
                         + raymaths::sum_of_multiples_until(5,max)
                         - raymaths::sum_of_multiples_until(15,max);
  std::cout << answer << std::endl;

  return EXIT_SUCCESS;
}


