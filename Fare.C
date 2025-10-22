/*
Name:Brandon Moses Owino
Registration no:PA106/G/28803/25
Defination A C function to calculate fare

*/
# include<stdio.h>

float Calculate_Fare(float distance, float amount);

int main()
{
  float result,distance;
  
  printf("\nEnter distance covered(km):\n");
  scanf("%f",&distance);
  
  result = Calculate_Fare(distance,50.00);
  printf("\nYour total fare is %.2f KES",result);
  	
}

float Calculate_Fare(float distance, float amount){
	float Total_fare;
	Total_fare = distance * amount;
	return Total_fare;
}