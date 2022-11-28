#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number[2];
    printf("Enter two Numbers: ");
    scanf("%d %d",&number[0],&number[1]);
    (number[0]>=number[1])?printf("Greatest among two is %d",number[0]):printf("Greatest among two is %d",number[1]);
    return 0;
}