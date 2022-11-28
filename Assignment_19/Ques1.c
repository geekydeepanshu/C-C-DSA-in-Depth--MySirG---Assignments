#include <stdio.h>
#include <stdlib.h>
int array_max(int[], int);

int main(void){
    system("cls");
    int num[10],min;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    printf("Maximum value from given numbers is %d",array_max(num,10));        
    return 0;
}

int array_max(int num[],int c){
    int max;
    max=num[0];    
    for(int i=1;i<c;i++)
        max=max>num[i]?max:num[i];
    return max;
}