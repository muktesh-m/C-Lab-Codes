#include<stdio.h>
//accepting resistance in series and parallel and find the current 
int main(int argc, char const *argv[])
{
    float r1,r2,r3,v,i1,i2,t,rs,rp;
    printf("Enter the Voltage");
    scanf("%f",&v);
    printf("Enter the 3 resistance values in ohms\n");
    scanf("%f %f %f",&r1,&r2,&r3);
    rs=r1+r2+r3;
    i1=v/rs;
    printf("The current when the given resistances are connected in series =%f\n",i1);
    rp=(1/r1)+(1/r2)+(1/r3);
    t=1/rp;
    i2=v/t;
    printf("The current when the given resistances are connected in parallel =%f\n",i2);

    return 0;
}
