#include<stdio.h>
#include<conio.h>
int a=1;

int main(){
    auto int a=2;
    {
        auto int a=3;
        printf("\n%d",a);

    }
    printf("\n%d",a);
}