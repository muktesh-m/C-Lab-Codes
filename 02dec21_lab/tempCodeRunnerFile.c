#include <stdio.h>
// overtime pay
int main(int argc, char const *argv[])
{
    int n,a;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the no of hours worked by employee %d:\n", i);
        scanf("%d", &n);
        if (n > 40)
        {
            a = (n - 40) * 12;
            printf("The overtime amount to be payed to employee %d is: Rs.%d\n",i,a);
        }
        else{
            printf("No overtime pay\n");
        }
        
    }

    return 0;
}
