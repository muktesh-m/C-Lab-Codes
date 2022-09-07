#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the 2 numbers to be swapped\n");
    scanf("%d %d",&a,&b);
    printf("\nValues before swapping: %d %d",a,b); 
    a=a+b;    
    b=a-b;    
    a=a-b;  
    printf("\nValues after swapping: %d %d",a,b); 

    return 0;
}
