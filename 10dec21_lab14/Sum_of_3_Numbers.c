//sum of 3 numbers using function prototype
#include <stdio.h>

void sum()
{
    int n1,n2,n3,sum;
    printf("Enter 3 numbers:  ");
    scanf("%d %d %d",&n1,&n2,&n3);
    sum=n1+n2+n3;
    printf("The sum of %d,%d and %d is %d.",n1,n2,n3,sum);
}

int main()
{
    sum();
    return 0;
}

