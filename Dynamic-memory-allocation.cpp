#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main(){

int n,i, sum=0, *a; 

float avg;

printf("Enter the Array Size:");

scanf("%d",&n);


a=(int*)malloc(n*sizeof(int));


for(i=0;i<n;i++) {

printf("Enter age %d : ",i+1);
 scanf("%d", &a[i]);
sum=sum+ a[i];

}

avg=(float)sum/n;

printf("\nsum=%d",sum);

printf("\navg=%.2f\n",avg);

for(i=0;i<n;i++)

printf("%d\t", a[i]);

free(a); 

getch();

}
