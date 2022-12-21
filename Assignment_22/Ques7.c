#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int string_char_find(char[],char);

int main(void){
    system("cls");
    char str[20],ch;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    printf("Enter Character: ");
    scanf("%c",&ch);
    str[strlen(str)-1]='\0';
    printf("%d",string_char_find(str,ch));        
    return 0;
}

int string_char_find(char str[],char ch){
    int i;
    for(i=0;str[i];i++)
        if(ch==str[i])
            break;
    if(i!=strlen(str))
        return i;
    else
        return -1;
}