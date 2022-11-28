#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void binary(int ,int,int );
 
int main(void){
    system("cls");
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    binary(n,31,0);
    return 0;
}

void binary(int n, int p,int flag){
    if(p<0);
    else{
        if(n>=pow(2,p)){
            printf("1");
            n-=pow(2,p);
            flag=1;
        }
        else
            if(flag)
            printf("0");
        p--;
        binary(n,p,flag);    
    }
}