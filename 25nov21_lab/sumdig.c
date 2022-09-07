#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,a=0,z;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        z=n%10;
        a=a+z;
        n=n/10;
    }
    printf("%d",a);
    
    return 0;
}
