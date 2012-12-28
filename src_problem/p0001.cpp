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
#include<cmath>

// Sum of natural numbers from 0.
unsigned long sum_until(unsigned long N)
{
  return 0.5 * N * (N+1);
}

// Sum  multiples
unsigned long sum_of_multiples_until(unsigned multiple, unsigned max)
{
  unsigned long new_max = max / multiple;
  return sum_until(new_max) * multiple;
}


// Find the sum of all the multiples of 3 or 5 below 1000.
int main(int argc, char* argv[])
{
  unsigned long max = 1000-1; // BELOW 1000
  unsigned long answer = sum_of_multiples_until(3,max) 
                         + sum_of_multiples_until(5,max)
                         - sum_of_multiples_until(15,max);
  std::cout << answer << std::endl;

  return EXIT_SUCCESS;
}


