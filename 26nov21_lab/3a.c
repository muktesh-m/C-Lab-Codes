//Print following pattern
#include<stdio.h>
int main()
{
int i,j,n,k;
printf("\nEnter the number of rows of the folllowing pattern to be printed: ");
scanf("%d",&n);

int sp=(n*2)-2;

for(i=0;i<n;i++)
{ 
  
  for(j=0;j<i*2+1;j++)
   printf("$");
  
  for(j=sp;j>0;j--)
   printf(" ");
    
  for(j=0;j<i*2+1;j++)
   printf("$");
   
  for(j=sp;j>0;j--)
   printf(" ");
   
  for(j=0;j<i*2+1;j++)
   printf("$"); 
   
   sp-=2;
   printf("\n");
}



sp=2;
for(i=n-1;i>0;i--)
{ 
  
  for(j=0;j<i*2-1;j++)
   printf("$");
  
  for(j=0;j<sp;j++)
   printf(" ");
    
  for(j=0;j<i*2-1;j++)
   printf("$");
   
  for(j=0;j<sp;j++)
   printf(" ");
   
  for(j=0;j<i*2-1;j++)
   printf("$"); 
   
   sp+=2;
   printf("\n");
}


   
printf("\n");
return 0;
}