#include <stdio.h>
//prime nos within range using functions
void prime(int a,int n){
    int i, num, count = 0;
    printf("The prime numbers in between the range %d to %d:\n",a,n);
    for (num = a; num <= n; num++)
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
void main()
{
    int start,end;
    printf("Enter the starting and ending limit");
    scanf("%d %d", &start, &end);
    prime(start, end);
   
}
