#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    char temp;
    for(int i=1;i<=5;i++){
        temp='A';
        for(int j=1;j<=5;j++){
            if(j>=i){
                printf("%c",temp);
                temp++;
            }
            else
                printf(" ");               
        }
        printf("\n");
    }
    return 0;
}