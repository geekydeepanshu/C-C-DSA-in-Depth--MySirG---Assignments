#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int str_len(char []);
 
int main(void){
    system("cls");
    char str[20];
    printf("Enter Your Name: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    printf("String Length is %d",str_len(str));
    return 0;
}

int str_len(char str[]){
    int i;
    for(i=0;str[i];i++);
    return i;
}