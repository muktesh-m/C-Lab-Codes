//convert from decimal to binary
#include<stdio.h>
int main()
{
    int dec,rem,i=1;
    int bin=0;

    printf("Enter the Decimal Number:\n");
    scanf("%d",&dec);
    int t=dec;
    while(dec>0)
    {
        rem=dec%2;
        dec=dec/2;
        bin=bin + (i*rem);
        i=i*10;
    }
    printf("DECIMAL:%d\nBINARY:%d",t,bin);
    printf("\n");
    return 0;
}