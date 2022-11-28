#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int a,b,c;
    printf("Enter Cofficient of x^2, Cofficient of X, Contant term of Quadratic Equation:");
    scanf("%d %d %d",&a,&b,&c);
    int d=b*b-4*a*c;
    if(d>0)
        printf("Roots are distinct and real");
    else if(d==0)
        printf("Roots are equal and real");
    else
        printf("Roots are distinct and imazinary");        
    return 0;
}