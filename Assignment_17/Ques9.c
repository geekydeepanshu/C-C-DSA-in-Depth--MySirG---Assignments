#include <stdio.h>
#include <stdlib.h>
int digit_count(int);

int main(void){
    system("cls");
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Number of Digits in Given Number are %d",digit_count(n));
    return 0;
}

int digit_count(int n){
    if(n==0)
        return 0;
    return (1 + digit_count(n/10));
}