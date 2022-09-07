#include <stdio.h>
void fibonacci(int mu_x, int *mu_y)
{
    int mu_a = 0, mu_b = 1;
    for (int i = 0; i < mu_x; i++)
    {
        if (i < 1)
        {
            *(mu_y + i) = mu_b;
            mu_b = mu_a + mu_b;
            mu_a = mu_b;
        }
        else
        {
            int c = mu_a + mu_b;
            *(mu_y + i) = c;
            mu_a = mu_b;
            mu_b = c;
        }
    }
}

void arrpri(int *mu_a, int n)
{
    int mu_sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(mu_a + i));
        mu_sum = mu_sum + *(mu_a + i);
    }
}

int main()
{
    int mu_m, mu_n, mu_roll;
    printf("ENTER YOUR ROLL NO. : ");
    scanf("%d", &mu_roll);
    mu_m = (mu_roll % 10) + 1 - 1;
    mu_n = (mu_roll % 10) + 10 - 1;
    int mu_x[mu_m], mu_y[mu_n];
    printf("\nARRAY WITH Mth term : ");
    fibonacci(mu_m, mu_x);
    arrpri(mu_x, mu_m);

    printf("\nARRAY WITH Nth term : ");
    fibonacci(mu_n, mu_y);
    arrpri(mu_y, mu_n);

    return 0;
}