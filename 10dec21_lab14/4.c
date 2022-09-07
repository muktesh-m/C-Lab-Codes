#include <stdio.h>
//check for elements if it is present in the array
int main(int argc, char const *argv[])
{
    int n, p, c = 0;
    int a[50];
    printf("Enter n\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements at %d index:\n", i);
        scanf("%d", &a[i]);
    }
    printf("Enter search element");
    scanf("%d", &p);
    for (int i = 0; i < n; i++)
    {
        if (p == a[i])
        {
            c++;
            printf("The element is present in index %d.\n", i);
        }
    }
    if (c != 0)
    {
        return 0;
    }
    else
    {
        printf("The element is not present in array");
    }

    return 0;
}