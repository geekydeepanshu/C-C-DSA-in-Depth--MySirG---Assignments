#include <stdio.h>
#include <stdlib.h>
void selection_sort(int[], int );
 
int main(void){
    system("cls");
    int num[10],min;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    selection_sort(num,10);
    for(int i=0;i<10;i++)
        printf("%d ",num[i]);   
    return 0;
}

void selection_sort(int num[],int count){
    int min,index,temp;
    for(int i=0;i<count;i++){
        index=i;
        min=num[index];
        for(int j=i+1;j<count;j++)
            if(!(min<num[j])){
                min=num[j];
                index=j;
            }
        temp=num[i];
        num[i]=num[index];
        num[index]=temp;
    }
}