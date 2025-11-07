/*
Name: Brabdon Moses Owino
Reg No:PA106/G/28803/25
Description: A C program to allow the librarian to enter book titles
             and store each title in file
*/

# include<stdio.h>

int main(){
	
	FILE *fptr;
	char title[100];
	//opening of a file for appending
	fptr = fopen("borrowed_book.txt","a");
	if(fptr == NULL){
		printf("Error in opening file.\n");
		return 0;
	}	
	
	printf("Enter the book title:");
	fgets(title,sizeof(title),stdin);
	
	//output printed on the file
	fprintf(fptr, "%s",title);
	fclose(fptr);
	
	printf("Book title stored successfully.\n");
	return 0;
	
}