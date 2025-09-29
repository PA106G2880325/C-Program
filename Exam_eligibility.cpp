/*
Neame:Brandon Moses Owino
Registration no:PA106/G/28803/25
Description: A simplle C program to check students eligibility for final exam
*/

# include<stdio.h>

int main(){
	//variable declaration
	float attendance;
	int avarage_marks;
	
	//prompting the user to enter attendance
	printf("\nEnter attendance:");
	scanf("%f",&attendance);
	
	//prompting the user to enter avarage_marks
	printf("\nEnter avarage_marks:");
	scanf("%d",&avarage_marks);
	
	if(attendance >= 75 && avarage_marks >= 40){
		printf("Congratulations!! You are eligible for the final exam\n");}
		
		else{printf("You are not eligible");
    
    return 0;
		}
  
	
	  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}