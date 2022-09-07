#include <stdio.h>
// x^y
int main(int argc, char const *argv[])
{
    int x,y,r=1;
    printf("Enter 2 nos\n");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++)
    {
        r=r*x; 
    }
    printf("%d\n", r);

    return 0;
}