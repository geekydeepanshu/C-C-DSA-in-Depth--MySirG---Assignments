#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void octal(int, int);
 
int main(void){
    system("cls");
    int n,index;
    printf("Enter a Natural Number: ");
    scanf("%d",&n);
    for(int i=0;!(pow(8,i)>n);i++)
        index=i;
    octal(n,index);    
    return 0;
}

void octal(int n, int index){
    if(index<0)
        return;
    int count=0;
    for(int i=1;n>=pow(8,index);i++){
        n-=pow(8,index);
        count=i;
    }
    printf("%d",count);
    index--;
    octal(n,index);
}