
#include<stdio.h>
int main(){
int i,j,n=5;
for(i=1;i<=n;i++){
   // printf("i=%d =>",i);
   for(j=1;j<=n;j++)
   { //printf("*");
    if (i==1 || i+j==n+1 || i==5 )    //For Z
  //if ((i<4 &&(i==j || i+j==n+1)) || (i>3 &&j==3))  //For Y
  //if(i==j || j==1 || j==5)    //For N
  //if(i==j || i+j==n+1)     //For X
    printf(":");
    
    else printf(" ");
   }
printf("\n");
}
    return 0;
}