/*
 * =====================================================================================
 *
 *    Description:  http://projecteuler.net/problem=2
 *    
 *    Each new term in the Fibonacci sequence is generated by adding the 
 *    previous two terms. By starting with 1 and 2, 
 *    the first 10 terms will be:
 *    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *    By considering the terms in the Fibonacci sequence whose values 
 *    do not exceed four million, find the sum of the even-valued terms.
 *
 *
 *    Author:  Raymon White, 
 *             http://ilearnsum.blogspot.co.uk/p/project-euler.html
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib> // for EXIT_SUCCESS
#include "ray_maths.h"

int main(int argc, char* argv[])
{
  // Four million
  unsigned upper_limit = 4000000;
  
  // Since we need to examine every Fibonacci number, it is better
  // to calculate them using a loop, rather than a formula.
  
  
  // Sum of even Fibonacci number.
  unsigned sum_even_fib = 0;
  // Previous Fibonacci number
  unsigned fib_prev = 0;

  // Current Fibonacci number
  unsigned fib_current = 1;
  while(fib_current < upper_limit)
  {
    unsigned fib_new = fib_current + fib_prev;
    fib_prev = fib_current;
    fib_current = fib_new;

    // Check if even, then add to the sum.
    if((fib_current % 2) == 0)
    {
      sum_even_fib += fib_current;
    }
  }
  std::cout << sum_even_fib << std::endl;
  return EXIT_SUCCESS;
}


