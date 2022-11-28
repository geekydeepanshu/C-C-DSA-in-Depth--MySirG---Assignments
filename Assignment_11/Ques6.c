#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int temp;
    for(int i=1;i<=4;i++){
        temp=i;
        for(int j=1;j<=4;j++){
            if(j<=i){
                printf("%d",temp);
                temp--;
            }
            else
                printf(" ");               
        }
        printf("\n");
    }
    return 0;
}