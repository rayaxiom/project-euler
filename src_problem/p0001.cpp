/*
 * =====================================================================================
 *
 *
 *    Description:  http://projecteuler.net/problem=1
 *
 *    If we list all the natural numbers below 10 that are multiples 
 *    of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *    Find the sum of all the multiples of 3 or 5 below 1000.
 *
 *    Author:  Raymon White,
 *    http://ilearnsum.blogspot.co.uk/p/project-euler.html
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib> // For EXIT_SUCCESS
#include <cmath>
#include "ray_maths.h"

int main(int argc, char* argv[])
{
  unsigned long max = 1000-1; // BELOW 1000
  unsigned long answer = raymaths::sum_of_multiples_until(3,max) 
                         + raymaths::sum_of_multiples_until(5,max)
                         - raymaths::sum_of_multiples_until(15,max);
  std::cout << answer << std::endl;

  return EXIT_SUCCESS;
}


