#include <stdio.h>
#include <stdlib.h>
int power(int,int);

int main(void){
    system("cls");
    int n,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Enter power of Number: ");
    scanf("%d",&i);
    printf("%d",power(n,i));
    return 0;
}

int power(int n,int i){
    if(i==0)
        return 1;
    return (n * power(n,i-1));
}