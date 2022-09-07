#include<stdio.h>
//sum of elements in array
int main(int argc, char const *argv[])
{
    int a[10],s=0;
    for (int i = 0; i < 10; i++)
    {
       printf("Enter number at %d position of array",i);
       scanf("%d",&a[i]);
       s=s+a[i];
    }
    printf("The sum is %d\n",s);
    
    return 0;
}
