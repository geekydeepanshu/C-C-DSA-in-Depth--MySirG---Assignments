#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||i==5||j==1||j==5){
                printf("*");
            }
            else
                printf(" ");               
        }
        printf("\n");
    }
    return 0;
}