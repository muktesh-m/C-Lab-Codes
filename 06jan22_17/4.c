//find middle integer of an array of five integers using pointers
#include <stdio.h>
int main()
{
    int data[5], *a, t, i, j;

    printf("Enter elements: \n");
    for (i = 0; i < 5; ++i)
    {
        printf("Enter element at index %d\n", i);
        scanf("%d", data + i);
    }
    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", data[i]);
    }
    for (i = 0; i < 5; ++i)
    {

        for (j = i + 1; j < 5; ++j)
        {

            if (data[i] > data[j])
            {

                t = data[i];
                data[i] = data[j];
                data[j] = t;
            }
        }
    }
    printf("\nAscending order:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d\t", data[i]);
    }

    a = data;

    printf("\n  %d\n", *(a + 2));
    return 0;
}