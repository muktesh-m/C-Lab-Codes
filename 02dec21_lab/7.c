#include <stdio.h>
//octal
int main()
{
    int num, oct = 0, rem = 0, place = 1;

    printf("Enter a decimal number\n");
    scanf("%d", &num);

    printf("\nOctal Equivalent of %d is ", num);
    while (num)
    {
        rem = num % 8;
        oct = oct + rem * place;
        num = num / 8;
        place = place * 10;
    }
    printf("%d\n", oct);

    return 0;
}