#include <stdio.h>
#include <stdlib.h>
int adjenet_duplicate_values(int[],int);
int flag;
 
int main(void){
    system("cls");
    int n[10],value;
    printf("Enter 10 Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&n[i]);
    value=adjenet_duplicate_values(n,10);
    if(flag)
        printf("No Adjecent Duplicate Value found!");
    else{
        printf("Adjecent Duplicate value is %d",value);
    }    
    return 0;
}
int adjenet_duplicate_values(int n[],int size){
    int i;
    for( i=0;i<size-1;i++){
        if(n[i]==n[i+1])
            return n[i];
    }
    if(i==size-1){
        flag=1;
    }
}