#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int a,b;
    float c,d;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    printf("Enter value of c and d :");
    scanf("%f%f",&c,&d);
    
    printf("%d %d",a+b,a-b);
     printf("\n%0.1f %0.1f",c+d,c-d);
    
    return 0;
}