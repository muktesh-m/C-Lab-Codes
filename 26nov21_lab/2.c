#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the limit");
    scanf("%d", &n);
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5-(i+1); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("%d",i+1);
        }
        for (int j = 0; j < 5-(i+1); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 5-(i+1); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("%d",i+1);
        }
        

        printf("\n");

        
    }
    for (int i = n-1; i > 0; i--){
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("%d",i);
        }
        for (int j = 0; j < 5-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 5-i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2*i-1; j++)
        {
            printf("%d",i);
        }
        

        printf("\n");

        
    }
}