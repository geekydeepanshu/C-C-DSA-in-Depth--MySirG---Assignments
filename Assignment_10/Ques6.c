#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int c;
    for(int i=1;i<=100;i++){
        c=0;
       for(int j=1;j<=i;j++)
            if(i%j==0)
                c++;
       if(c==2)
            printf(" %d ",i);         
        
    }
    return 0;
}