// Doubt on line 8:


#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int a,b;
    printf("Enter Values of A and B respectively: ");
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("Values of A is %d and B is %d after Swapping",a,b);
    return 0;
}