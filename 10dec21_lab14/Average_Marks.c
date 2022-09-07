//Average marks using arrays
#include <stdio.h>

int main()
{
    int i,avg,count=0,sum=0,marks[20];

    for(i=0;i<20;i++)
    {
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
        if(marks[i]>89)
            count++;
    }
    avg=sum/20;
    printf("Average marks= %d\n",avg);
    printf("Numer of students secured O grade= %d\n",count);
    return 0;
}