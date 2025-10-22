/*
Name: Brandon Moses Owino
Registration no: PA106/G/28803/25
Defination : A C Function to calculate electric bill
*/


# include<stdio.h>
  float Calculate_Electric_bill(float units);
  
  int main()
  {
  	float result,units;
  	
  	printf("Enter units consumed:");
  	scanf("%f",&units);
  	
  	result = Calculate_Electric_bill(units);
  	printf("\nThe total bill is Ksh%.2f",result);
  	
  }
  
  float Calculate_Electric_bill(float units)
  {
  	int Total_bill;

	  if(units <= 100){
	  	Total_bill = units * 10;}
	  	
	  if(units > 100 && units <= 200);{
	  	Total_bill = (1000) + (units - 100) * 15;}
	  	
	  if(units > 200){
	  	Total_bill = (2500) + (units - 200) * 20;}
	  	
	  	return Total_bill;
  	
  }

