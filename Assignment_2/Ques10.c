#include <stdio.h>
#include <stdlib.h>

struct time{
    int hour,minute;
};
 
int main(void){
    struct time time;
    system("cls");
    printf("Enter time in \"HH:MM\" format: ");
    scanf("%d:%d",&time.hour,&time.minute);
    printf("Time is: %d hour and %d Minute",time.hour,time.minute);
    return 0;
}