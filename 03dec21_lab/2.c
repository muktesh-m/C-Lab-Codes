#include <stdio.h>
// lower case to upper case
void lctouc(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = (int)ch - 32;
        printf("%c", ch);
    }
    else
    {
        printf("invalid");
    }
}
int main(int argc, char const *argv[])
{
    char a;
    printf("Enter the character\n");
    scanf("%c", &a);
    lctouc(a);
    return 0;
}
