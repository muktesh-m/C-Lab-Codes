#include<stdio.h>
//wap to find out the secondary voltage of a transformer if primary voltage, turns of primary and secondary are given.
int main(int argc, char const *argv[])
{
    int pt,st,pv,sv;
    printf("Enter the primary voltage\n");
    scanf("%d",&pv);
    printf("Enter the primary turns\n");
    scanf("%d",&pt);
    printf("Enter the secondary turns\n");
    scanf("%d",&st);
    sv=(pv*st)/pt;
    printf("Secondary voltage = %d",sv);

    return 0;
}
