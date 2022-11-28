#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int a,b,i,s;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    s=a<b?a:b;
    for(i=s;i>0;i--)
        if(a%i==0 && b%i==0){
            break;
        }
    printf(i==1?"Co-Prime Numbers":"Not a Pair of Co-Prime Numbers");    
    return 0;
}