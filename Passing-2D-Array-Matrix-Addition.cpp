#include<stdio.h>
#define rows 3
#define cols 3
void read(int x[][cols]){
    for(int i=0;i<cols;i++){
        for(int j=0;j<cols;j++){
            printf("Enter Item [%d][%d] :",i,j);
            scanf("%d",&x[i][j]);
        }
    }
}
void show(int x[][cols]){
    for(int i=0;i<cols;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",x[i][j]);}
            printf("\n");}
            }

void add(int x[][cols],int y[][cols],int z[][cols]){

    for(int i=0;i<cols;i++){
            for(int j=0;j<cols;j++){
z[i][j]=x[i][j] + y[i][j];
            }
        }
        }

        int main(){
            int a[rows][cols], b[rows][cols], c[rows][cols];
            read(a);
            read(b);
            add(a,b,c);
            show(c);
        }

