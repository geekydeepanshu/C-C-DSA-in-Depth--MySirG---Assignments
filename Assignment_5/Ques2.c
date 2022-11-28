#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    number%5?printf("Not Divisble by 5"):printf("Divisible by 5");
    return 0;
}