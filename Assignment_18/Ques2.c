#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int num[10],sum=0;
    printf("Enter Ten Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&num[i]);
    for(int i=0;i<10;i++)
      sum+=num[i];
    printf("Average of given numbers is %.2f",(float)sum/10);     
    return 0;
}