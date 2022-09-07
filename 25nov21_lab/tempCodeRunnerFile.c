#include<stdio.h>  
int main()    
{    
    int n,r,sum=0,temp;    
    printf("enter the number=");    
    scanf("%d",&n);    
    temp=n;    
    for(int i=1;i<=n;i++)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }   
    printf("%d",sum); 