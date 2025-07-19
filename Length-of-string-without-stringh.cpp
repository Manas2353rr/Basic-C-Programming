#include<stdio.h>
int main(){
char name[20];
printf("Enter a string :");
fgets(name,20,stdin);
int i=0;
while(name[i]!='\0'){
    i++;
}
printf("length of string %s = %d",name,i);
    return 0;
}
