#include <stdio.h>
// odd numbers and their sum
int main(int argc, char const *argv[])
{
    int c = 0, s = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &i);
        if ((i % 2) != 0)
        {
            c = c + 1;
            s = s + i;
        }
    }
    printf("Total no of odd numbers inputed %d\n", c);
    printf("Sum:%d", s);
    return 0;
}
