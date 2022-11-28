#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int num[10],min;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    min=num[0];    
    for(int i=1;i<10;i++)
        min=min<num[i]?min:num[i];
    printf("Minimum value from given numbers is %d",min);        
    return 0;
}