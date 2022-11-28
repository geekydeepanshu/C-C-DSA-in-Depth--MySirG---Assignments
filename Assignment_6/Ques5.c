#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    (number%3==0&&number%2==0)?printf("Given number is divisible by 2 and 3"):printf("Given number is not divisible by 2 and 3");
    return 0;
}