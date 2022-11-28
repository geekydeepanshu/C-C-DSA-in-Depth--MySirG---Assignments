#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int num[10],sum_even=0,sum_odd=0;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    for(int i=0;i<10;i++)
    {
        if((num[i])%2?(sum_odd+=num[i]):(sum_even+=num[i]));
    }
    printf("Sum of Even Numbers are %d and Odd Numbers are %d",sum_even,sum_odd);     
    return 0;
}