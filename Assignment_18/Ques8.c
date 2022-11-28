#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int num[10],temp;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    for(int i=0;i<9;i++)
      for(int j=0;j<9-i;j++)
         if(num[j]>num[j+1]){
          temp=num[j];
          num[j]=num[j+1];
          num[j+1]=temp;
         }
    printf("Second smallest element is %d ",num[1]);    
    return 0;
}