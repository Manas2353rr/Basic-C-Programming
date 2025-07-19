#include<stdio.h>
#include "techdev.h"  //"" means search it in same folder
#include "Password.h"
#include "systemm.h"
#include "Law-of-motion.h"
int main() {
password();
show();
number();
cycle();
 //Calling the fn

int f,g;
printf("\nEnter value of a and b :",f,g);
scanf("%d%d",&f,&g);

float a=square(f);
float b=square(g);

printf("\na=%f b=%f",a,b);
}