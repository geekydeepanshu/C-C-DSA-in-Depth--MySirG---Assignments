#include <stdio.h>
#include <stdlib.h>
 
int main(void){
   // system("cls");
    int n[10],*arr,arr_size=0,flag,count;
    arr=(int*)malloc(sizeof(int));
    printf("Enter 10 Numbers: ");
    for(int i=0;i<10;i++)
        scanf("%d",&n[i]);
    for(int i=0;i<10;i++){
        flag=1;
        if(i==0){
            arr[i]=n[i];
            arr_size++;
            continue;
        }
        for(int j=0;j<arr_size;j++)
            if(n[i]==arr[j]){
                flag=0;
                break;
            }
        if(flag){
            arr=(int*)realloc(arr,(arr_size+1)*sizeof(int));
            arr[arr_size]=n[i];
            arr_size++;
        }    
    }
    for(int i=0;i<arr_size;i++){
        count=0;
        for(int j=0;j<10;j++){
            if(arr[i]==n[j])
                count++;
        }
        printf("%d appears %d times in array\n",arr[i],count);
    }
    return 0;
}