#include<stdio.h>
int main(){
    int a=5;
    int *b;
    int**c;

    b=&a;
    c=&b;
    printf("\na=%d",a);
    printf("\n&a=%x",&a);
    printf("\nb=%x",b);
    printf("\n&b=%x",&b);
    printf("\nc=%x &c=%x",*c,**c);
     printf("*c=%x **c=%d",*c,**c);
    ++(**c);
    printf("\na=%d",a);
    }