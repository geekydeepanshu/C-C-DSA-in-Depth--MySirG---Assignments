#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n[10],temp,count,sum=0;
    printf("Enter 10 Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&n[i]);
    for(int i=0;i<10;i++){
        temp=n[i];
        count=0;
        for(int j=0;j<10;j++){
            if(i==j)
                continue;
            if(temp==n[j])
                count++;
        }
        if(count==1)
          sum++;               
    }
    printf("Total Number of Duplicate Elements in Array is %d",sum/2);
    return 0;
}