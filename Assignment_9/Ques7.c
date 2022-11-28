#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=0;n;i++)
        n/=10;
    printf("Number of digits in given number is %d",i);    
    return 0;
}

// Failed Test Case: 010