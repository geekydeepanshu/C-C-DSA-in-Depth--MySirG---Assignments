#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    char temp=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(j<=i){
                printf("%d",temp);
                temp++;
            }
            else
                printf(" ");               
        }
        printf("\n");
    }
    return 0;
}