#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void get_string(char [][20]);
void put_string(char [][20]);
 
int main(void){
    system("cls");
    char str[5][20];
    get_string(str);
    put_string(str);
    return 0;
}

void get_string(char str[][20]){
    printf("Enter five Strings: ");
    for(int i=0;i<5;i++){
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
}

void put_string(char str[][20]){
    printf("Strings Are:\n");
    for(int i=0;i<5;i++)
        printf("%s\n",str[i]);
}