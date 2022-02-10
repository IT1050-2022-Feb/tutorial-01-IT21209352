/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { //main function

  int m1,m2;// variables

  printf("\nEnter marks 1 : "); //data inputs
  scanf("%d",&m1);

  printf("\nEnter marks 2 : ");
  scanf("%d",&m2);

  printf("\nAverage is    : %d",(m1+m2)/2); // calculate average


  return 0;
}

