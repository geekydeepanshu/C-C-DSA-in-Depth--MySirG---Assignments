#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isalphanumeric(char[]);

int main(void){
    system("cls");
    char str[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    if(isalphanumeric(str))
        printf("Given String is Alphanumeric String");
    else
        printf("Given String is not Alphanumeric String");    
    return 0;
}


int isalphanumeric(char str[]){
    int digit=0,alphabet=0;
    for(int i=0;str[i];i++){
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
            alphabet=1;
        if(str[i]>=48&&str[i]<=57)
            digit=1;
        if(alphabet&&digit)
            return 1;    
    }
    return 0;
}