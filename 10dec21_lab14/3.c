#include <stdio.h>
//max of 5 elements using array
int main(int argc, char const *argv[])
{
    int a[5], largest=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element at %d index:\n", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
        
    }
    printf("largest:%d\n", largest);

    return 0;
}