#include <stdio.h> 
int main()
{
int a,b, temp; 
printf("Enter two integers\n");
scanf("%d%d", &a, &b);
printf("Before SwappingnFirst variable = %d Second variable = %d\n", a, b);
temp = a;
a = b;
b = temp;
printf("After SwappingnFirst variable = %d Second variable = %d\n", a, b);
return 0;
}