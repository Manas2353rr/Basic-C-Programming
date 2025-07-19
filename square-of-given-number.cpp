#include<stdio.h>
int square(int n);
int main(){
    int a,b;
    printf("Enter a Number :");
    scanf("%d",&a);
    b=square(a);
    printf("\nResult B=%d",b);
   // printf("\nResult=%d",square(7));
    return 0;
}
int square(int n){return n*n;}