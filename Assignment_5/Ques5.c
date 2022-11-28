#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    number&1?printf("Odd Number"):printf("Even Number");
    return 0;
}