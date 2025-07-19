#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 4
int main(){
    int a[size],i,total=0;
    double avg;
    system("cls");
for(i=0;i<size;i++){
    printf("Enter Age %d :" ,i+1);
    scanf("%d",&a[i]);
    total=total+a[i];
}
for (i=0;i<size;i++) printf("%d\t",a[i]);
avg=(double)total/size;
printf("\nTotal Age :%d years",total);
printf("\nAvg age is %.2f",avg);
    
    return 0;

}