#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    number>0?printf("Positive Number"):printf("Non Positive Number");    
    return 0;
}