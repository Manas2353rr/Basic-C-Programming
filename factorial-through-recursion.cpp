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
    if(n<=1) return 1;
    else return n*factorial(n-1);
}
