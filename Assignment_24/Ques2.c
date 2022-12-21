#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void get_string(char [][20]);
void vowels_in_string(char [][20]);
 
int main(void){
    system("cls");
    char str[5][20];
    get_string(str);
    vowels_in_string(str);
    return 0;
}

void get_string(char str[][20]){
    printf("Enter five Strings: ");
    for(int i=0;i<5;i++){
        fgets(str[i],20,stdin);
        str[i][strlen(str[i])-1]='\0';
    }
}

void vowels_in_string(char str[][20]){
    char temp;
    int vowels;
    for(int i=0;i<5;i++){
        vowels=0;
        for(int j=0;str[i][j];j++){
            temp=str[i][j];
            if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'||temp=='A'||temp=='E'||temp=='I'||temp=='O'||temp=='U')
            vowels++;
        }
        printf("Number of Vowel in \"%s\" are %d\n",str[i],vowels);
    }
        
}