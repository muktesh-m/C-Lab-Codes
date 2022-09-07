#include <stdio.h>
// 0 to 9 and 9 to 0
int main(int argc, char const *argv[])
{
    int a, n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        a = n - i;
        printf("%d  %d\n", i, a);
    }
    return 0;
}
