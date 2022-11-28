#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int arr[3];
    printf("Enter three numbers:");
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    int max=arr[0];
    for(int i=1;i<3;i++){
       max=max>arr[i]?max:arr[i];
    }
    printf("Maximun among three numbers is %d",max);
    return 0;
}