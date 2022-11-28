#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int flag;
    for(int i=1;i<=4;i++){
        flag=1;
        for(int j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i&&flag){
                printf("*");
                flag=0;
                }
            else{
                printf(" ");
                flag=1;
            }               
        }
        printf("\n");
    }
    return 0;
}