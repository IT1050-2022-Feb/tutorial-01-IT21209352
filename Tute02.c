/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int distance,amount=0,rem_distance; // creating variables

  printf("\nEnter the distance travelled : ");//data inputs
  scanf("%d",&distance);

  if (distance>30) //checking conditions
  {
    rem_distance = distance - 30;
    amount = (30*50)+ (rem_distance*40);
  }
  else if (distance <= 30 && distance >0 ) //checking conditions
  {
    amount = distance * 50;
  }
  else //checking conditions
  {
    printf("\nInvalid distance");
  }

  printf("\nTotal amount is : %d",amount);// displaying final result
  
  return 0;
}
