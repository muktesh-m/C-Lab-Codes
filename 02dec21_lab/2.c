#include <stdio.h>
//prime nos  from 1 to 300
void main()
{
    int i, num, count = 0;
    printf("The prime numbers in between the range 1 to 300:\n");
    for (num = 1; num <= 300; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
            printf("%d\n", num);
    }
}
