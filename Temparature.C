/*
Name:Brandon Moses Owino
Registration no: PA106/G/28803/25
Defination : A C functionc to convert temparature in fahrenheit to celsius
*/


# include<stdio.h>
 float  Convert_To_celsius(float fahrenheit, int a, float b);
 
 int main()
 {
 	float result,fahrenheit;
 	
 	printf("\nEnter temparature(fahrenheit):");
 	scanf("%f",&fahrenheit);
 	
 	result = Convert_To_celsius(fahrenheit,32,5/9);
 	printf("\nTemparature is %.2fCelsius",result);
 }
 
 float Convert_To_celsius(float fahrenheit, int a, float b)
 {
 	float celsius; 
    celsius= (fahrenheit - 32) * 5/9;
 	return celsius;
 }
 
 
 
