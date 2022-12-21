#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int m1[3][3],m2[3][3],m3[3][3];
    printf("Enter Matrix 1: \n");
    for(int i=0;i<3;i++)
        scanf("%d %d %d",&m1[i][0],&m1[i][1],&m1[i][2]);
    
    printf("Enter Matrix 2: \n");
    for(int i=0;i<3;i++)
        scanf("%d %d %d",&m2[i][0],&m2[i][1],&m2[i][2]);
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            m3[i][j]=m1[i][j]+m2[i][j];
    }
    printf("Sum of Given Matrices are: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
          printf("%d ",m3[i][j]);  
        printf("\n");
    }

    return 0;
}