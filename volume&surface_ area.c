/*
Name:Brandon Moses Owino
Registration number:PA106/G/28803/25
Description:A C program to find the volume and surface area of a cylinder
*/


# include<stdio.h>
# include<math.h>

int main(){
	//Variable declaration
	float height;
	float radius;
	float PI=3.142;
	float volume;
	float surface_area;
	//prompting user to enter height
	printf("\nEnter height:");
	scanf("%f",&height);
	
	//prompting the user to enter radius
	printf("\nEnter radius:");
	scanf("\n %f", &radius);
	
	volume = PI * pow(radius, 2) * height;
	printf("\nVolume is: %.4fm\n", volume);
	
	surface_area = (2 * PI * pow(radius,2) * height) + (2 * PI * radius * height);
	printf("surface_area is %.2fm",surface_area);
	return 0;
}