/*
Name:Brandon Moses Owino
Registration no:PA106/G/28803/25
Description: A simple C program to calculate water bill
*/

# include<stdio.h>
# include<math.h>

int main(){
	
	//Variable declaration
	float unit;
	float Cost;
	
	//Prompting the user to enter the number of water units consumed
	printf("Enter number of units consumed:");
	scanf("%f",&unit);
	
	if(unit <= 30){
		Cost = 20 * unit;
	}
	else if(unit <=40 && unit >=31){
		Cost = 25 * unit;
	}
	else if(unit > 60){
		Cost = 30 * unit;
	}
	
	printf("\nCost is %.2f KES",Cost);
	
	return 0;
	
}
