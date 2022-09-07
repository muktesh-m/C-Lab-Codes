#include <stdio.h>
//add two 2d matrix of 4x4
int main(int argc, char const *argv[])
{
    int a[4][4], b[4][4], c[4][4];
    printf("Take inputs for array 1\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("Enter number at %d and %d position of array", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Take inputs for array 2\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("Enter number at %d and %d position of array", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("On summation of array 1 and 2\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}