#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int i=1;
    while (i<=20)
    {   
        if(i%2!=0)
        printf("%d  ",i);
        i++;
    }
    
    return 0;
}