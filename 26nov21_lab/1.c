#include <stdio.h>
int main(){
union adress_addres

{
    int a[2];
    char c;
} x;

x.c = 'T';
x.a[0] = 67;
printf("%d %d", &x.c, &x.a[0]);
}
