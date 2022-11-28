// Pascal Tringle
#include <stdio.h>
#include <stdlib.h>
int factorial(int);
 
int main(void){
    system("cls");
    int n;
    static int sum;
    printf("Enter Number of terms to print Sum of Terms: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=factorial(i)/i;
    }
    printf("Sum of %d terms of Series is %d",n,sum);
    return 0;
}

int factorial(int n){
    int f=1;
    for(int i=n;i>=1;i--)
        f*=i;
    return f;    
}