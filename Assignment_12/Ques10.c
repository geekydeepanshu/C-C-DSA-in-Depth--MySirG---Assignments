#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int temp,flag=0;
    for(int i=1;i<=4;i++){
        temp=65;
        for(int j=1;j<=7;j++){
            if(j<=5-i||j>=3+i){
                printf("%c",temp);
                flag=1;
                j<4?temp++:temp--;  
            }
            else{
                printf(" ");
                if(flag){
                    temp--;
                    flag=0;
                }
            }       
        }
        printf("\n");
    }
    return 0;
}