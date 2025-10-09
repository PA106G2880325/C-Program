/*
Name:Brandon Moses Owino
Registration no:PA106/G/28803/25
Description: A simple C program to prompt the user to enter password until it is correct
*/

# include<stdio.h>

int main(){
	
	int password = 1;
	
	do
	{
	  printf("\nEnter password:");
	  scanf("%d",&password); 
	  
	  if(password != 1234){
	  	printf("\nIncorrect pasword!Try again!");}
	  	
	  if(password == 1234){
	  	printf("\nAccess granted!");break;}
	  
	  password++;
	  
	}while(password > 1);
	
	
	return 0;
	
}
