#include <stdio.h>
#include <stdlib.h>
void swap_values(int[],int ,int);

int main(void){
    system("cls");
    int n[10],index_1,index_2;
    printf("Enter 10 Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&n[i]);
    printf("Enter indexs of two numbers to be swapped: ");
    scanf("%d %d",&index_1,&index_2);
    swap_values(n,index_1,index_2);    
    for(int i=0;i<10;i++)
        printf("%d ",n[i]);
    return 0;
}
void swap_values(int n[],int i1,int i2){
    int temp;
    temp=n[i1];
    n[i1]=n[i2];
    n[i2]=temp;
}