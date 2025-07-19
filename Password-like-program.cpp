#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void password(){
    printf("\nEnter Password");
    char password[10],c;
    for (int i=0;i<10;i++){
        c=getch();
        putchar('*');
        if(c==13){
            password[i]='\0';
            break;
        
        }
        else
        password[i]=c;

    }
    if(strcmp(password,"TecDev")!=0){
        printf("\nSorry Invalid Password. Access Denied");
        getch();
        exit(1);
    }
    }
    int main(){
        system("cls");
        password();
        printf("\nWelcome in our program.");
    }