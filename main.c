/**
@file arithmetic.c
@author Kiran Rao (klrao)
A program that prints: Sum of all integers from 1 to 1000000000
*/

#include <stdio.h>
#include <stdlib.h>

/* Number to sum up */
#define N 1000000000

/** 
    Program starting point, contains for loop to sum up ints
    @return program exit status
*/
int main()
{
  long sum = 0;
  
  
  for (int i = 1; i <= N; i++) {
    sum += i;
  }

  printf( "%ld\n", sum );

  return EXIT_SUCCESS;

}
