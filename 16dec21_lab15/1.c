#include <stdio.h>
//Enter twenty numbers and wap to check whether they are positive negative even or odd
int main(int argc, char const *argv[])
{
    int a[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("Enter number at %d and %d position of array", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Printing the positive numbers\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (a[i][j] > 0)
            {
                printf(" %d \n", a[i][j]);
            }
        }
    }

    printf("Printing the negative numbers\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (a[i][j] < 0)
            {
                printf("%d\n", a[i][j]);
            }
        }
    }
    printf("Printing the Even numbers\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                printf(" %d \n", a[i][j]);
            }
        }
    }
    printf("Printing the odd numbers\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                printf(" %d\n", a[i][j]);
            }
        }
    }
    return 0;
}