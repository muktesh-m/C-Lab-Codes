#include <stdio.h>
//wap to copy contents of one array to another array in reverse order
int main()
{
    int n, ar1[100], ar2[100], i;
    printf("Specify the length of array\n");
    scanf("%d", &n);
    //taking input of elements
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number at index %d\n", i);
        scanf("%d", &ar1[i]);
    }
    //copying elements
    for (i = n; i >= 0; i--)
        ar2[i] = ar1[n - (i+1)];

    //displaying array
    for (i = 0; i < n; i++)
        printf("%d ", ar2[i]);

    return 0;
}