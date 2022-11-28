#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    number/1000?printf("Not a Three digit Number"):printf("Three digit Number");
    return 0;
}