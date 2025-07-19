#include <stdio.h>
void number() {
    int age;


    printf("\nEnter age: ");
    scanf("%d", &age);

    
 
   if (age>=18) {
        printf("You can vote");

    } else {
        printf("You can\'t vote");
    }
    

}
