#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void){
    system("cls");
    int num,digits,x,n,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    n=num,x=num;
    for(digits=0;x;digits++)
        x/=10;
    for(int i=1;i<=digits;i++)
    {
        sum+=pow(n%10,3);
        n/=10;
    }    
    printf(sum==num?"Armstrong Number":"Not a Armstrong Number");
    return 0;
}