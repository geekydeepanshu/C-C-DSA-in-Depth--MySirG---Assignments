#include <stdio.h>
#include <stdlib.h>

struct date{
    int day,month,year;
};
 
int main(void){
    struct date today;
    system("cls");
    printf("Enter Date in \"DD/MM/YYYY\" Format: ");
    scanf("%d/%d/%d",&today.day,&today.month,&today.year);
    printf("\nDay-%d,Month-%d,Year-%d",today.day,today.month,today.year);
    return 0;
}