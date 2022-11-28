#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int arr[5],flag=1;
    printf("Enter marks of five Subjects: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]<33){
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Result: Pass");
    else    
        printf("Result: Fail");
    return 0;
}