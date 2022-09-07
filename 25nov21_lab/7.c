#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 10
// wap to disp time period of a simple pendulum
int main(int argc, char const *argv[])
{
    float t;
    printf("Length     Time period\n");
    for (int l = 10; l <= 50; l += 10)
    {
        t = 2 * pi * sqrt(l / g);
        printf("%d         %f\n", l, t);
    }

    return 0;
}
