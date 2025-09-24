/*
Name:Brandon Moses Owino
Registration no;PA106/G/28803/25
Description:A simple C programto to impliment conditions for a bank to offer a
             loan
             */
# include<stdio.h>
# include<math.h>

int main(){
	//variable declaration
	 int age;
	 float income;
   
     //Prompt user to enter age
     printf("\n Enter age:");
     scanf("%d",&age);
     
     printf("\n Enter income:");
     scanf("%f",&income);
     
     //Display
     if(age >= 21 && income >= 21000){
      printf("You succesfuly qualify for the loan");}
       else {printf("Sorry you do not qualify for the loan");}
      	
      	return 0;
	  }

	  
	  
	  	
	  
     

     
	 
     
 
