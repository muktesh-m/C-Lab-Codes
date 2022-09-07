#include <stdio.h>
//menu driven
int main(int argc, char const *argv[])
{
    int c;
    int n, f = 1, count;
    printf("Enter 1 for performing factorial of a number\n");
    printf("Enter 2 for performing prime or not\n");
    printf("Enter 3 for performing Odd or even number\n");
    printf("Enter 4 for exiting the program\n");
    printf("Enter your choice\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        // factorial
        printf("Enter a number\n");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("%d", f);
        break;
    case 2:
        // prime or not

        printf("Enter a no \n");
        scanf("%d", &n);
        count = 0;
        for (int i = 2; i <= n/2 ; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && n != 1)
            printf("Prime no\n");
        else
        {
            printf("Not a prime no\n");
        }
        break;
    case 3:
        // even or odd
        printf("Enter a no \n");
        scanf("%d", &n);
        if(n%2==0){
            printf("Even no");
        }
        else{
            printf("Odd no");
        }
        break;
    case 4:
        break;

    default:
        printf("Invalid");
        break;
    }

    return 0;
}
