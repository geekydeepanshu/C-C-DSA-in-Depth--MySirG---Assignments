#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int m;
    printf("Enter a Month number: ");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("No of Days in given month is 31 days");
    else if (m==4||m==6||m==9||m==11)
        printf("No of Days in given month is 30 Days");
    else 
        printf("No of Days in given month is 28 or 29 Days");        
    return 0;
}