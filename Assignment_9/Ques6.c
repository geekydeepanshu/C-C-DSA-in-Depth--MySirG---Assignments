#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,f=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
        f*=i;
    printf("Factorial of %d is %d",n,f);    
    return 0;
}