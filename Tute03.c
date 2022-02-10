/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n,tot=0,count;// creating variables

  printf("Enter the value for n : ");//data inputs
  scanf("%d",&n);

  for (count=0;count <= n;count ++) // loop to count total
  {
    tot = tot + count;
  }

  printf("\nTotal is : %d",tot); //displaying result

  return 0;
}

