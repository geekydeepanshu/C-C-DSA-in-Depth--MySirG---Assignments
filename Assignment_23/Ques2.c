#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_trim(char[]);
 
int main(void){
    system("cls");
    char str[20];
    printf("Enter a String:");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    string_trim(str);
    printf("|");
    printf("%s",str);
    printf("|");
    return 0;
}

void string_trim(char str[]){
    for(int i=0;str[i]==' ';)
        for(int j=0;str[j];j++)
            str[j]=str[j+1];
    for(int i=strlen(str);str[i-1]==' ';i=strlen(str))
            str[i-1]='\0';               
}