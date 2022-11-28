#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int i=1,n;
    printf("Enter a Natural Number: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d  ",i*i);
        i++;
    }
    
    return 0;
}