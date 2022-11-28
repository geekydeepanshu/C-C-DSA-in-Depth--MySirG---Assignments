#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int a,b,n;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    n=a>b?a:b;
    for(int i=1;1;i++)
        if (i*n%a==0 && i*n%b==0){
                printf("LCM of %d and %d is %d",a,b,i*n);
                break;
                }
    return 0;
}