#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(void){
    system("cls");
    int digits,x,n,sum;
    for(int j=0;j<=1000;j++){
        x=j,n=j;
        sum=0;
        for(digits=0;x;digits++)
            x/=10;
        for(int i=1;i<=digits;i++)
        {
            sum+=pow(n%10,3);
            n/=10;
        }
        if(sum==j)    
        printf(" %d ",j);
    }
    return 0;
}