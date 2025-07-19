#include<stdio.h>
int main(){
int i=1;
techdev:
printf("%d\t",i);

i=i+1;
if(i<4)
goto techdev;

    return 0;
}