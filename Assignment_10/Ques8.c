#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int c,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=n+1;1;i++){
        c=0;
       for(int j=1;j<=i;j++)
            if(i%j==0)
                  c++;
       if(c==2)
            {
                printf(" %d ",i); 
                break;
            }        
    }
    return 0;
}