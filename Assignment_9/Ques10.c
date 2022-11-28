#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void){
    system("cls");
    int n,x,digit,last_digit,reverse=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    x=n;
    for(digit=0;x;digit++)
        x/=10;
    for(int i=1;i<=digit;i++){
        last_digit=n%10;
        n/=10;
        reverse+=last_digit*pow(10,digit-i);
    }    
    printf("Reverse of Number is %d",reverse);
    return 0;
}