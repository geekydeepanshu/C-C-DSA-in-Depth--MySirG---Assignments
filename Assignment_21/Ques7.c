#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20],temp;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;i<=strlen(str)/2;i++){
        temp=str[i];
        str[i]=str[strlen(str)-1-i];
        str[strlen(str)-1-i]=temp;
    }     
    printf("String is %s",str);
    return 0;
}