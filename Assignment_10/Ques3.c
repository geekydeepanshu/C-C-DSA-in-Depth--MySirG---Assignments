#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,a=-1,b=1,c=0,flag=1;
    printf("Enter number to be checked: ");
    scanf("%d",&n);
    for(int i=0;c<=n;i++){
        c=a+b;
        a=b;
        b=c;
        if(c==n){
            flag=0;
            printf("Given number is a term of Fibonacci series");
            break;
        }    
    }
    if(flag)
            printf("Given number is not a term of Fibonacci series");
    return 0;
}