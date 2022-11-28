#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    float inr;
    printf("Enter amont in INR: ");
    scanf("%f",&inr);
    printf("Amount in dollars is %.2f",inr/84.23);
    return 0;
}