#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int num[10],max;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    max=num[0];    
    for(int i=1;i<10;i++)
        max=max>num[i]?max:num[i];
    printf("Maximum value from given numbers is %d",max);        
    return 0;
}