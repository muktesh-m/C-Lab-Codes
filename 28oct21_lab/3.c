//evaluaion
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    a=5;
    b=10;
    c=++a+b--;
    d=a+++--b;
    printf("your evaluated answer is: %d and %d",d,c);
    return 0;
}