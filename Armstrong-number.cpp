#include<stdio.h>
int main(){
    int m,n,sum,r;
    printf("Enter a Number");
    scanf("%d",&n);
    sum=0;
    m=n;
    while(m!=0){
        r=m%10;
        sum=sum+r*r*r;
        m=m/10;
    }
//printf("Sum of number of %d= %d",n,sum);
if(n==sum)
    printf("\n%d is an armstrong no.",n);

else    printf("\n%d is not an armstrong no.",n);

    return 0;
}