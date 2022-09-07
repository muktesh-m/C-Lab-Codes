#include <stdio.h>
int fibo(int num)
{
    if (num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else
    {
        return(fibo(num-1)+fibo(num-2));
    }
}
void main()
{
    int n;
    int result;
    printf("Enter the nth number:\n ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("not possible beacuse number is negative.\n");
    }
    else
    {
        result=fibo(n);
        printf("The %d th digit in fibonacci series is %d\n", n, result);
    }
}
