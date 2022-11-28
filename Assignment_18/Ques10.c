#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int num[10],num_copy[10],sum=0;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    for(int i=0;i<10;i++)
      num_copy[i]=num[i];
    for(int i=0;i<10;i++)
        printf("%d ",num_copy[i]);        
    return 0;
}