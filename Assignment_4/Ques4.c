#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    n=(n/10)*10;
    printf("%d",n);
    return 0;
}