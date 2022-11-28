#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(n%i==0)
            count++;
    printf(count==2?"Prime Number":"Not a Prime Number");
    return 0;
}