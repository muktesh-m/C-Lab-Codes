//X raised to Y using function prototype
#include <stdio.h>
#include <math.h>

void power()
{
    int n,k,ans;
    printf("Enter base: ");
    scanf("%d",&n);
    printf("Enter exponent: ");
    scanf("%d",&k);
    ans=pow(n,k);
    printf("%d raised to %d is %d.",n,k,ans);
}

int main()
{
    power();
    return 0;
}

