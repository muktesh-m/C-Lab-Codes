#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,f=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        f=f*i;

    }
    printf("%d",f);
    return 0;
}
