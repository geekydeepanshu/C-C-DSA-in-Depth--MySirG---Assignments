#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20],ch;
    int count=0;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    printf("Enter Character: ");
    scanf("%c",&ch);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
        if(ch==str[i])
            count++;
    
    printf("%c appears %d times in String",ch,count);
    return 0;
}