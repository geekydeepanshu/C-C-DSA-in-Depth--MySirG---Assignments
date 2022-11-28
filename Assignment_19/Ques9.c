#include <stdio.h>
#include <stdlib.h>
void selection_sort(int[] ,int);
 
int main(void){
    system("cls");
    int n1[10],n2[10],n[20];
    printf("Enter 10 Numbers to be Stored in Array 1: ");
    for(int i=0;i<10;i++)
        scanf("%d",&n1[i]);
    printf("Enter 10 Numbers to be Stored in Array 2: ");    
    for(int i=0;i<10;i++)
        scanf("%d",&n2[i]);    
    for(int i=0;i<10;i++)
        n[i]=n1[i];  
    for(int i=0;i<10;i++)
        n[i+10]=n2[i];       
    selection_sort(n,20);
    for(int i=0;i<20;i++)
        printf("%d ",n[i]);   
    return 0;
}

void selection_sort(int num[],int count){
    int max,index,temp;
    for(int i=0;i<count;i++){
        index=i;
        max=num[index];
        for(int j=i+1;j<count;j++)
            if(!(max>num[j])){
                max=num[j];
                index=j;
            }
        temp=num[i];
        num[i]=num[index];
        num[index]=temp;
    }
}