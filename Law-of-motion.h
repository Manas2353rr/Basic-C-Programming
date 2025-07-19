#include<stdio.h>
int cycle(){
    double m,a,f;
    printf("\nEnter Mass Acceleration: ");
    scanf("%lf%lf",&m,&a);
    f=m*a;
    printf("Force=%.2lf",f);
    return 0;

}