#include<stdio.h>
double factorial(int n);
int main(){
    int n;
    double result;

    printf("Enter a Number :");
    scanf("%d",&n);
    result=factorial(n);
    printf("\nFactorial =%.0lf",result);
    return 0;
}
double factorial(int n){
    double f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
