#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20];
    int alphabets=0,digits=0,special_character=0;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++){
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
            alphabets++;
        else if(str[i]>=48&&str[i]<=57)
            digits++;
        else
            special_character++;    
    }     
    printf("Alphabets are %d, Digits are %d And Special Characters are %d",alphabets,digits,special_character);
    return 0;
}