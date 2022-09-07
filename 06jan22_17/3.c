//greater of 2 nos
#include <stdio.h>

void main()
{
    int x, y, *large, *a, *b;
    printf("Enter the value of x and y :");
    scanf("%d%d", &x, &y);
    a = &x;
   b = &y;
    if (*a > *b)
        large = a;
    else
        large = b;
    printf("The greater number is : %d", *large);
}