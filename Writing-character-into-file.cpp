#include<stdio.h>
int main(){
    FILE*f;
    char Filename[20];
    char c;
    printf("\nEnter file name :");
    gets(Filename);
    f=fopen(Filename,"w");
    printf("Type the text, press Fn+F6 to exit\n");
    while ((c=getchar())!=-1)
    {
        fputc(c,f);
    }
    printf("\nFile created successfully");
    fclose(f);

}