#include<stdio.h>

struct Student { char name[20]; int age; };

int main() {

Student a={"Sachin Tendulkar",21};

Student *p; 

p=&a; 

printf("\n%s %d", a.name, a.age);

printf("\n%s %d", (*p).name, (*p).age);

printf("\n%s %d", p->name, p -> age );

}