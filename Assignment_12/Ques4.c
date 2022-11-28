#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int temp;
    for(int i=1;i<=4;i++){
        temp=1;
        for(int j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
                printf("%d",temp);
               j<4?temp++:temp--;
            }
            else
                printf(" ");               
        }
        printf("\n");
    }
    return 0;
}