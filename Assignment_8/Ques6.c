#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int i=1,n;
    printf("Enter a Natural Number: ");
    scanf("%d",&n);
    while (i<=2*n)
    {   
        if(i%2==0)
        printf("%d  ",i);
        i++;
    }
    
    return 0;
}