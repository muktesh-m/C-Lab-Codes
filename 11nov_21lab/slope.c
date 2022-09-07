#include<stdio.h>
//2D slope 
int main(int argc, char const *argv[])
{
    int x1,x2,y1,y2;float m;
    printf("Enter the values for (x1,y1)\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the values for (x2,y2)\n");
    scanf("%d %d",&x2,&y2);
    m=(y2-y1)/(x2-x1);
    printf("The slope of givrn two 2D points =%f",m);
    return 0;
}
