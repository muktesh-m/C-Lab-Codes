#include <stdio.h>
//reversal array
int arrayRev(int n)
{
    int arg1[n];
     for (int i = 0; i < n; i++)
    {
        printf("Enter element at index %d\n", i);
        scanf("%d", &arg1[i]);
    }
    printf("\nThe original array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arg1[i]);
    }
    printf("\nThe reversal array is: \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", arg1[n - i]);
    }
}

int main(int argc, char const *argv[])
{
    int p;
    printf("Enter number of elements in the array\n");
    scanf("%d", &p);
   
    arrayRev(p);
    return 0;
}
