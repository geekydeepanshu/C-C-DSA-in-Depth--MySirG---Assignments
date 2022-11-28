// Pascal Tringle
#include <stdio.h>
#include <stdlib.h>
int binomial_cofficient(int, int);
int factorial(int);
 
int main(void){
    system("cls");
    int n=8,flag,r;
    for(int i=0;i<=n;i++){
        flag=1;
        r=0;
        for(int j=0;j<=2*n;j++)
        {
            if(j>=n-i&&j<=n+i&&flag){
            printf("%d",binomial_cofficient(i,r));
            flag=0;
            r++;
            }
            else{
                printf(" ");
                flag=1;
            }
        }
        printf("\n");
    }
    return 0;
}

int binomial_cofficient(int n, int r){
    int c;
    c=factorial(n)/(factorial(n-r)*factorial(r));
    return c;
}

int factorial(int n){
    int f=1;
    for(int i=n;i>=1;i--)
        f*=i;
    return f;    
}