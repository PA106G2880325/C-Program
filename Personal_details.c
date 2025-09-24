/*
 Name;Brandon Moses Owino
 REgistration no:PA106/G/28803/25
 Description:A C program to prompt the use to enter:-Height
                                                   -ID_NO
                                                   -Bank balance
*/

//Variable declaration
# include <stdio.h>  

int main(){
	int height;
	float ID_NO;
	float bank_balance;
	
	printf("\nEnter height:");
	scanf("%d",&height);
	
    printf("\nEnter ID_NO:");
	scanf("%f", &ID_NO);  
	
	printf("\nEnter bank_balance:");  
	scanf("%f", &bank_balance);
	
	printf("\n height is %dm\n",height);  
	printf("\n ID_NO is %.0f\n",ID_NO);
	printf("\n bank_balance is ksh%.2f",bank_balance);
	return 0;
}                                     