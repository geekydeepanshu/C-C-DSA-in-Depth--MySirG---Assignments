#include <stdio.h>
#include <stdlib.h>
void naturalNum(int );
 
int main(void){
    system("cls");
    int n;
    printf("Enter a Natural Number: ");
    scanf("%d",&n);
    naturalNum(n);
    return 0;
}

void naturalNum(int n){
    if(n==1){
        printf("1 ");
    }
    else{
        naturalNum(n-1);
        printf("%d ",n);
    }
}