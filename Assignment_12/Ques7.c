#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int flag,temp;
    for(int i=1;i<=5;i++){
        flag=1,temp=1;
        for(int j=1;j<=9;j++){
            if(j>=6-i&&j<=4+i&&flag){
                printf("%d",temp);
                flag=0;
                }
            else{
                printf(" ");
                flag=1;
                if(j>=6-i&&j<=4+i&&j!=5)
                    j<5?temp++:temp--;  
            }
                
        }
        printf("\n");
    }
    return 0;
}