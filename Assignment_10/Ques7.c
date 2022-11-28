#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int c,a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        c=0;
       for(int j=1;j<=i;j++)
            if(i%j==0)
                c++;
       if(c==2)
            printf(" %d ",i);         
        
    }
    return 0;
}