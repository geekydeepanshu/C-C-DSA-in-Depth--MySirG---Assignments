#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
    system("cls");
    char str[20],i;
    printf("Enter Your Name: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++);
    printf("String Length is %d",i);
    return 0;
}