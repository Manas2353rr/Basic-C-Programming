#include<stdio.h>
int main(){
    double m,a,f;
    printf("Enter Mass  Acceleration: ");
    scanf("%lf,%lf",&m,&a);
    f= m*a;
    printf("Force=%.2lf",f);
    return 0;

}
