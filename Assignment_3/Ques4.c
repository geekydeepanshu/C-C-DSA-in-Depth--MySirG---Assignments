#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    printf("%d",number%10);
    return 0;
}