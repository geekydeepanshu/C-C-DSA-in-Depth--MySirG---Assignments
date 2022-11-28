#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int a,b,temp;
    printf("Enter Values of A and B respectively: ");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("Values of A is %d and B is %d after Swapping",a,b);
    return 0;
}