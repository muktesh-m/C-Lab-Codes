#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5][5], largest = 0;
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
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }
    printf("largest:%d\n", largest);
    return 0;
}
