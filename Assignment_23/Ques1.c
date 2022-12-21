#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void string_reverse(char[]);
 
int main(void){
    system("cls");
    char str[20],str_rev[20];
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(int i=0;i<=strlen(str);i++)
        str_rev[i]=str[i];
    string_reverse(str_rev);
    if(strcmp(str,str_rev))    
        printf("Given String is not a Palindrome String");
    else
        printf("Given String is Palindrome String");    
    return 0;
}

void string_reverse(char str[]){
    char temp;
    for(int i=0;i<=strlen(str)/2;i++){
        temp=str[i];
        str[i]=str[strlen(str)-1-i];
        str[strlen(str)-1-i]=temp;
    } 
}