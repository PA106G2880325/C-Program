/*
Name: Brandon Moses Owino
Registration no: PA106/G/28803/26
Description: A 2D array to display room occupancy
*/

# include<stdio.h>

int main(){
	int i,j;
	
	int occupancy[5][10] = {
	    {1,0,0,1,1,1,0,0,1,0},
		{0,0,0,1,1,1,1,0,0,0},
		{1,1,0,1,1,0,0,0,0,1},
		{0,0,0,0,1,0,0,1,1,1},
		{0,1,0,1,0,0,0,1,0,1}
			
	};
	 
	 for(i=0;i<5;i++){  
       for(j=0;j<10;j++){
       	printf("\n%d",occupancy[i][j]);

	   
}
  printf("\n");
	 }
  return 0;
  
}
  

  
  