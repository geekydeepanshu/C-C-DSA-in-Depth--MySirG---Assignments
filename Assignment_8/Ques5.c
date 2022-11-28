#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n;
    printf("Enter a Natural Number: ");
    scanf("%d",&n);
    int i=2*n;
    while (i>0)
    {   
        if(i%2!=0)
        printf("%d  ",i);
        i--;
    }
    
    return 0;
}