#include <stdio.h>
#include <string.h>
/*void disp(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("$\n");
    }
    
}*/
int main(int argc, char const *argv[])
{
    int a; char f[1];
    printf("Enter no of times you want loop to execute in above function:\n");
    scanf("%d",&a);
    scanf("%s",&f);
    
     for (int i = 0; i < a; i++)
    {
        printf("%s", f);
    }
    
    return 0;
}
