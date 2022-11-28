#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,digit;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Enter a Digit: ");
    scanf("%d",&digit);
    n=n*10+digit;
    printf("%d",n);
    return 0;
}