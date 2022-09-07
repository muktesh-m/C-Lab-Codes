#include<stdio.h>
//wap to disp 1 if 2 lines in 2-d are parallel to eachother else any other int value
int main(int argc, char const *argv[])
{
    int x1,x2,x3,x4,y1,y2,y3,y4,m1,m2,t;
    printf("Enter the coordinates of points of (x1,y1) of a line \n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates (x2,y2) in same line\n");
    scanf("%d %d",&x2,&y2);
    printf("Enter the coordinates (x3,y3) in another line\n");
    scanf("%d %d",&x3,&y3);
    printf("Enter the coordinates (x4,y4) in another line\n");
    scanf("%d %d",&x4,&y4);
    m1=(y2-y1)/(x2-x1);
    m2=(y4-y3)/(x4-x3);
    t=(m1==m2);
    printf("If they are parallel its 1 if not it is 0 \n = %d",t);
    return 0;
}
