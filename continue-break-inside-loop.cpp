#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        i=i+1;
        if(i%2==0)
        continue;
        printf("%d\t",i);
        if(i==7)
        break;
    }
    return 0;
}