#include <stdio.h>
//printing elements of array in matrix order
int main(int argc, char const *argv[])
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("Enter number at %d and %d position of array", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
