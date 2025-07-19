#include<stdio.h>

#define size 3

struct Student{

char name[20];

int p,c,m, total;

float percent;

char grade;

}; void read(Student &s){ 
 printf("Enter Name:");
  fgets(s.name,20,stdin);
   printf("Enter Marks in P C M " );
    scanf("%d%d%d", &s.p, &s.c, &s.m);
fflush(stdin);
}



void compute(Student &s){

s.percent=s.total/3.0;



s.total=s.p + s.c + s.m;
s.percent=s.total/3.0;
s.grade=(s.percent>=80)?'A': (s.percent>=70)?'B':'F';

}
void show(const Student &s){ 
printf("\nName:%s Total:%d Percent:%.2f Grade:%c", s.name, s.total, s.percent, s.grade);

}

int main(){ Student s[size];
int i; for(i=0; i<size; i ++) { read (s[i]) ;compute (s[i]) ;}
 
 for(i=0; i<size; i++){ show(s[i]); } 

}
