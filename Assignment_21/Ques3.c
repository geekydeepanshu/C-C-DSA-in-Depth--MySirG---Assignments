#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    system("cls");
    char str[20],ch;
    int count=0;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    printf("Enter Character: ");
    scanf("%c",&ch);
    str[strlen(str)-1]='\0';
    for(int i=0;str[i];i++)
        if(str[i]=='a'||str[i]=='A'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
            count++;
    
    printf("Number of Vowels in String is %d",count);
    return 0;
}