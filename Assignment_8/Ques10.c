#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int i=1,n;
    printf("Enter a Natural Number: ");
    scanf("%d",&n);
    while (i<=10)
    {
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}