#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,a=-1,b=1,c=0;
    printf("Enter the required number of term of Fibonnaci Series(1-->n): ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }
    
    return 0;
}