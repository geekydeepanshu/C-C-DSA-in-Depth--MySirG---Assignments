#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int string_vowel_count(char[]);

int main(void){
    system("cls");
    char str[20],ch;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    printf("Number of Vowels in String is %d",string_vowel_count(str));
    return 0;
}


int string_vowel_count(char str[]){
    int count=0;
    for(int i=0;str[i];i++)
        if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
            count++;
    return count;
}