#include <stdio.h>
//wap to find 3rd element  of array
int main()
{
    int arr[5], *ptr, t;
    printf("Enter the value: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    //printing array
    printf("The array is:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > arr[i])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("\nThe array After ascending arrangement is:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    ptr = &arr[2];
    printf("\nThe 3rd element is:%d", ptr);
}