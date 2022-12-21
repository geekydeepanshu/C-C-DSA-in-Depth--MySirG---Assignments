#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20];
    int count=0;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
        if(' '==str[i])
            count++;
    
    printf("Number of Spaces in String is %d",count);
    return 0;
}