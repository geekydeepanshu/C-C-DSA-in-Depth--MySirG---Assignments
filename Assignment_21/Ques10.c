#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20],ch;
    int i;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    printf("Enter Character: ");
    scanf("%c",&ch);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
        if(ch==str[i])
            break;
    printf("%c appears at Index Number %d first in String",ch,i);
    return 0;
}