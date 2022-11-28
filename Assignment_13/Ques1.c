#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int m,days;
    printf("Enter a Month Number: ");
    scanf("%d",&m);
    switch (m)
    {
    case 1:
    case 3:            
    case 5:
    case 7:
    case 8:   
    case 10:
    case 12:
        printf("Number of Days in given month is 31 Days");
        break;   
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of Days in given month is 30 Days");    
        break;
    case 2:
        printf("Number of Days is 28 or 29 Days");
        break;    
    default:
        printf("Invalid Month Number");
        break;
    }
    return 0;
}