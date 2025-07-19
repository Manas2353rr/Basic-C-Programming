#include<stdio.h>
int main(){
    FILE *f;
    char Filename[20];
    char c;
    printf("\nEnter file name to read :");
    gets(Filename);
    f=fopen(Filename,"r");
   
    while (!feof(f))
    {
        c=fgetc(f);
        if(c>='A' && c<='Z') 
        c=c+32;
        putchar(c);
    }
    printf("\nFile read completed.");
    fclose(f);

}