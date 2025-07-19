#include<stdio.h>
void swap(int*a,int*b);
int main(){
    int a=5,b=6;
    swap(&a,&b);


    printf("\nInside main a =%d b=%d",a,b);
    return 0;
}
void swap(int*a,int*b){
    int t=*a; *a=*b; *b=t;
       printf("\nInside swap a=%d b=%d",*a,*b);
}
