#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n/1000)
        printf("Given Number is not a three digit number");
    else    
    {
       n=(n/10)+(n%10)*100;
        printf("Sum is %d",n);
    }
    return 0;
}