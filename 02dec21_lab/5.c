#include <stdio.h>
// One no raise to other
int main(int argc, char const *argv[])
{
    int n1,n2,r=1;
    printf("Enter 2 nos\n");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n2; i++)
    {
        r=r*n1; 
    }
    printf("%d\n", r);

    return 0;
}
