#include <stdio.h>
#include <stdlib.h>
void fibonacci(int);
 
 int a,b;

int main(void){
    system("cls");
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n){
    int c;
    if(n==-0){
        a=-1;
        b=1;
        return;
    }
    fibonacci(n-1);    
      c=a+b;
      printf("%d ",c);
      a=b;
      b=c;
}

