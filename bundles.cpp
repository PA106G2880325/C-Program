/*
Name:Brandon Moses Owino
Registration no:PA106/G/28803/25
Description:A simple C program to display user's preffered amount of data bundles 
             depending on the user's choice
*/

# include<stdio.h>	

int main(){
	int choice;
	
	printf("Select bundles:");
	printf("\n1. 100MB @ 50 KES\n");	 
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 600 KES\n");
	
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	 switch(choice){ 
	 	case 1:
	 		printf("\nYou selected 100MB @ 50 KES");break;
	 	
		case 2:
			printf("\nYou selected 500MB @ 200 KES");break;
			
		case 3:
			printf("\nYou selected 1GB @ 350 KES");break;
			
		case 4:
			printf("\nYou selected 2GB @ 600 KES");break;	
			
			
		default:
			printf("\nInvalid choice");	 	
	 }	
	 		      
	return 0;
	
}	
		
		
	
	
	
	
	
	 