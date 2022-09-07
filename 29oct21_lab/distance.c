#include<stdio.h>
#define g 9.8

int main(int argc, char const *argv[])
{
    int u,t,s;
    printf("Enter the initial velocity and time period \n");
    scanf("%d %d",&u,&t);
    s=(u*t)+(1/2.0)*g*t*t;
    printf("The ditance travelled by an object is %d meters",s);
    return 0;
}
