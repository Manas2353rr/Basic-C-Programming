#include<stdio.h>
#include<string.h>
int main(){
    
int p,c,m,total;
float percent;
char grade;
printf("Enter Marks in P C M :");
scanf("%d%d%d",&p,&c,&m);
total=p+c+m;
percent=(float)total/3;

grade = (percent>=90)?'A': (percent>=70)?'B': 'F';


printf("Total = %d \n Percent = %lf \n Grade = %c",total,percent,grade);
return 0;
}