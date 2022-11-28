#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int i;
    printf("Enter a Natural Number: ");
    scanf("%d",&i);
    while (i>0)
    {
        printf("%d  ",i);
        i--;
    }
    
    return 0;
}