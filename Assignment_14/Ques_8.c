#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    int factorial=1;
    for(int i=n;i>0;i--)
        factorial*=i;
    return factorial;    
}

void combinations(int n,int r){
    int combinations;
    combinations=factorial(n)/factorial(n-r);
    printf("Number of Combiantions are: %d",combinations);
}
 
int main(void){
    system("cls");
    int n,r;
    printf("Enter value of n and r: ");
    scanf("%d %d",&n,&r);
    combinations(n,r);
    return 0;
}