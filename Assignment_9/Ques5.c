#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum+=i*i*i;
    printf("Sum of square of first %d  Natural Numbers is %d",n,sum);    
    return 0;
}