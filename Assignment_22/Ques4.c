#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_uppercase(char[]);

int main(void){
    system("cls");
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    string_uppercase(str);
    printf("String is: %s",str);
    return 0;
}

void string_uppercase(char str[]){
    for(int i=0;str[i];i++)
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;

}