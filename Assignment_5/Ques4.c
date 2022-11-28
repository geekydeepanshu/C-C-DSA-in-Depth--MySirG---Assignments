#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    (number/2)*2==number?printf("Even Number"):printf("Odd Number");
    return 0;
}