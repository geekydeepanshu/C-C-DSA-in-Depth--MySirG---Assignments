#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20],str_cpy[20];
    int count=0;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    strcpy(str_cpy,str);
    printf("String is %s",str_cpy);
    return 0;
}