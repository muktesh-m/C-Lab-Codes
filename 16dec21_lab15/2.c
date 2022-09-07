#include<stdio.h>
// C Program to Perform Scalar Matrix Multiplication
int main()
{
 	int i, j,Multiplication[3][4], Number;
  
 
 	printf("\n Enter the Matrix Elements \n");
 	for(i = 0; i < 3; i++)
  	{
   		for(j = 0;j < 4;j++)
    	{
      		scanf("%d", &Multiplication[i][j]);
    	}
  	}
   
 	printf("\n Please Enter the Multiplication Value  :  ");
 	scanf("%d", &Number);
 	  
 	for(i = 0; i <3; i++)
  	{
   		for(j = 0; j < 4; j++)
    	{
      		Multiplication[i][j] = Number * Multiplication[i][j];    
   	 	}
  	}
 
 	printf("\n The Result of a Scalar Matrix Multiplication is : \n");
 	for(i = 0; i <3; i++)
  	{
   		for(j = 0; j < 4; j++)
    	{
      		printf("%d \t ", Multiplication[i][j]);
    	}
    	printf("\n");
  	}
 	return 0;
}