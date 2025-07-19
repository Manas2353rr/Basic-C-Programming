#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#define size 5
const int size=5;
int main(){
    int a[size];
   int i,n,count;
   for(i=0;i<size;i++){
    printf("Enter age %d :",i);
    scanf("%d",&a[i]);

   }
    begin:
printf("\nEnter age to search(-1 to exit) :");
scanf("%d",&n);
count=0;

for(i=0;i<size;i++){
    if(a[i]==n) {
        printf("\nAge %d found at %d index",n,i);
        count=count+1;
    }
}
 
 if(count==0)
 printf("\nAge not found",n);
 else
 printf("\nAge %d is found %d times",n,count);
 getch();
 if(n!=-1)
 goto begin;
    return 0;

}