/* 
Name: Brandon Moses Owino
Reg No: PA106/G/28803/25
Description: A C programm to read all transactions from a file and calculate and display the total sales 
*/

# include <stdio.h>
 int main(){
 	
 	FILE *salesptr;
 	int sum = 0;
 	int num;
 	
 	salesptr=fopen("C:\\Users\\user\\Pictures\\files.txt.","r");
 	while (fscanf(salesptr, "%d",&num)==1){
 	
 	sum+=num;
 	printf("%d\n",num);
 	
	 }
	 printf("\nThe total sales for this day are %d",sum);
	 
	 fclose(salesptr);
	 
	 return 0;
		 
		 
	 }
 	
 	
	 
	 
