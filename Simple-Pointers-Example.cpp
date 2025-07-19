#include<stdio.h>
int main(){
    int a=5;
    int *b;
    b=&a;
    printf("\na=%d",a);
    printf("\n&a=%x",&a);
    printf("\nb=%x",b);
    printf("\n&b=%x",&b);
    printf("\n*b=%d",*b);
    (*b)++;
    printf("\na=%d",a);
    }