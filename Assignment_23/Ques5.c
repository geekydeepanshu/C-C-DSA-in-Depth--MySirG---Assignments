#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_lowercase(char[]);

int main(void){
    system("cls");
    int str_cmp_result;
    char arr1[20],arr2[20];
    printf("Enter a String: ");
    fgets(arr1,20,stdin);
    arr1[strlen(arr1)-1]='\0';
    printf("Enter another String: ");
    fgets(arr2,20,stdin);
    arr2[strlen(arr2)-1]='\0';
    string_lowercase(arr1);
    string_lowercase(arr2);
    str_cmp_result=strcmp(arr1,arr2);
    if (str_cmp_result==1)
        printf("String Second comes alphabaticallay first");
    else if (str_cmp_result==-1)
        printf("String first comes alphabaticallay first");
    else 
        printf("Both Strings are alphabetically Same");    
    return 0;
}

void string_lowercase(char str[]){
       for(int i=0;str[i];i++)
          if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
}