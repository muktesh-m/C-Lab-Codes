#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i = 1; i <= 7; i++)
    {
        for(int j=1;j<=7-i+1;j++)
        {
            printf("A");
        }
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=7-i+1;j++)
        {
            printf("A");
        }
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=7-i+1;j++)
        {
            printf("A");
        }
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }

        printf("\n");
    }
    return 0;
    
}

