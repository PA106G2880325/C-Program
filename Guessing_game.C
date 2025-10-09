/* 
Name:Brandon Moses Owino
Registration no:PA106/G/28803/25
Description:Asimple C program to implement a number guesing game
*/

# include<stdio.h>

int main(){
	int attempts=0;
	int Number=1;
	
	printf("ENTER GUESS NUMBER RANGING FROM 1 TO 20.");
	
	while(Number != 6){
		printf("\nEnter the guess number:");
		scanf("%d",&Number);
		
		attempts++;
		 
        if (Number > 6 && Number < 20){ 
        printf("\nToo high!");}
        
       else if(Number < 6){
        	printf("\nToo low!");}
        	     
      else if(Number == 6){
           	printf("\nCongratulations!\n");
           	printf("it took you %d attempt(s)",attempts);}
	  else{
	  	printf("\nInvalid choice");break;}	   
		
		
		}
		
	      
		return 0;
	}
	
