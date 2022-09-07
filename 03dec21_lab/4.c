#include <stdio.h>
#include <math.h>
//roots of a quadratic equation using function
void roots(int a, int b, int c)
{
    int r1, r2;
    if (((b * b) - 4 * a * c)<0)
        {
            printf("roots are imaginary");
        }
    else
    {
        r1 = (-b + sqrt((b * b) - 4 * a * c)) / 2 * a;
        r2 = (-b - sqrt((b * b) - 4 * a * c)) / 2 * a;
        printf("r1 = %d, r2 = %d", r1, r2);
    }
}
int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("Enter a b c of quadratic equation\n");
    scanf("%d %d %d", &x, &y, &z);
    roots(x, y, z);
    return 0;
}
