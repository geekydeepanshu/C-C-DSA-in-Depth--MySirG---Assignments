#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);
    if(year%100){
       if(year%4)
            printf("Not a Leap Year");
       else
            printf("Leap Year");             
    }
    else{
        if (year%400)
            printf("Not a Leap Year");
        else
            printf("Leap Year");  
    }
    return 0;
}