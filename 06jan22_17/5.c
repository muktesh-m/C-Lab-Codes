#include <stdio.h>
//wap to add elements in an array using pointers
int main()
{
    int i, *ptr, sum = 0, arr[5] = {2, 4, 6, 8, 0};
    ptr = arr;
    for (i = 0; i < 5; ++i)
    {
        sum = sum + (*ptr + i);
    }
    printf("sum=%d",sum);
    return 0;
}