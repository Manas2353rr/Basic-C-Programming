#include<stdio.h>
int main(){
    int a;
    float b,c;
    printf("Enter value of b and a :");
    scanf("%f%d",&b,&a);

    c=b/a;
    
    printf("The value of b divided by a is %.2f :",c);
    
    return 0;

}