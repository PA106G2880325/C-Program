/*
Name:Brandon Moses Owino
Registration no:PA106/G/28803/25
Description: A simple C program to calculate compound interest
*/

# include<stdio.h>
# include<math.h>

int main(){
	//Variable declaration
	float Amount;
	float Principle;
	float Rate;
	float Number_of_compounding_years;
	float Total_time;
	
	//prompting the user to enter Amount
	printf("\n Enter Principle:");
	scanf("%f",&Principle);
	
	printf("\n Enter Rate:");
	scanf("%f",&Rate);
	
	printf("\n Enter Number_of_years:");
	scanf("%f",&Number_of_compounding_years);
	
	printf("\n Enter Total time:");
	scanf("%f",&Total_time);
	
	//Displaying compound interest
	Amount=Principle * pow(1 + Rate/Number_of_compounding_years,Number_of_compounding_years * Total_time);
	printf("Amount is ksh%.2f",Amount);
	
	return 0;
}
	
	

