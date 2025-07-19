#include<stdio.h>
int main(){
int age;
printf("Enter Age");
scanf("%d",age);

if (age>=18)
    goto vote;
else 
    goto thanks;
vote:
    printf("You can vote");
thanks:
    printf("Bye");

    return 0;
}