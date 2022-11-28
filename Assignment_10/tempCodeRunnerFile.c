#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int a,b,i,s;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    s=a<b?a:b;
    if(s){
        for(i=s;i>0;i--)
            if(a%i==0 && b%i==0){
                printf("HCF of %d and %d is %d",a,b,i);
                break;
        }
    }    
    else
        printf("0 or Invalid Number entered for HCF Operation !");
    return 0;
}