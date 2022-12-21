#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_reverse (char[],int, int);

int main(void){
    system("cls");
    char str[20],temp;
    int i1,i2;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    printf("Enter indices: ");
    scanf("%d %d",&i1,&i2);
    str[strlen(str)-1]='\0';
    string_reverse(str,i1,i2);    
    printf("String is %s",str);
    return 0;
}

void string_reverse(char str[],int i1, int i2){
    char temp;
        temp=str[i1];
        str[i1]=str[i2];
        str[i2]=temp;
}