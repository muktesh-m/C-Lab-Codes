#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=0;
    
    for (int i = 1; i <=100; i++)
    {
        if(i%3==0)
        {
            a=a+i;
        }

    }
    printf("%d",a);
    return 0;
}
