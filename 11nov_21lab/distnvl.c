#include<stdio.h>
#define g 9.8
#define h 0.5
//wap to find out the velocity and distance covered by a stone after time(1,2,3,4,5 sec), if it is thrown with a initial velocity from top of eiffel tower
int main(int argc, char const *argv[])
{
    int u,t=0; float v,s;
    printf("Enter the initial velocity\n");
    scanf("%d",&u);
    //t=1
    t++;
    v=u+g*t;
    s=u*t+h*g*t*t;
    printf("Velocity and distance = %f and %f respectively when t=1\n",v,s);
     //t=2
    t++;
    v=u+g*t;
    s=u*t+h*g*t*t;
    printf("Velocity and distance = %f and %f respectively when t=2\n",v,s);
     //t=3
    t++;
    v=u+g*t;
    s=u*t+h*g*t*t;
    printf("Velocity and distance = %f and %f respectively when t=3\n",v,s);
     //t=4
    t++;
    v=u+g*t;
    s=u*t+h*g*t*t;
    printf("Velocity and distance = %f and %f respectively when t=4\n",v,s);
    return 0;
     //t=5
    t++;
    v=u+g*t;
    s=u*t+h*g*t*t;
    printf("Velocity and distance = %f and %f respectively when t=5\n",v,s);
}
