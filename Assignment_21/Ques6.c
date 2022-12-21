#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    printf("String is: %s",str);
    return 0;
}