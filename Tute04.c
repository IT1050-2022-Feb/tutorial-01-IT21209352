/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int,int); //function prototypes
int maximum(int,int);
int multiply(int,int);

int main() { //main function

   int no1, no2; // variables

   printf("Enter a value for no 1 : "); // data inputs
   scanf("%d", &no1);

   printf("Enter a value for no 2 : ");  // data inputs
   scanf("%d", &no2);

  // calling the function and displaying results
   printf("%d ", minimum(no1, no2)); 
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));

   return 0;
}

int minimum(int no1,int no2)// minimum function
{
  if (no1>no2) //if for condition check
  {
    return no2;
  }
  else if (no1<no2)
  {
    return no1;
  }else
  {
    return 0;
  }
}

int maximum(int no1,int no2)// max function
{

  if (no1>no2) //if for condition check
  {
    return no1;
  }
  else if (no1<no2)
  {
    return no2;
  }else
  {
    return 0;
  }
}

int multiply(int no1,int no2) // multiply function
{
  return (no1*no2);
}
