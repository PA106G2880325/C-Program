/*
1D Array
Name: Brandon Moses
Registrstion no: PA106/G/28803/25
Description: 1D array to record total revenue for each day of the week
*/

# include<stdio.h>

int main(){
	
    float sum = 0;
	int i;	
	float revenue[7] = {25000,27000,30000,32000,37000,41000,50000};
	float avarage;
	for(i = 0;i < 7;i++){
		printf("Ksh %.2f\n",revenue[i]);
		sum += revenue[i];
		avarage = sum / 7;
	}
printf("\nTotal weekly revenue is Ksh %.2f\n",sum);
printf("\nAvarage daily revenue is Ksh %.2f",avarage);

return 0;
}
