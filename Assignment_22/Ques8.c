#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int string_char_find(char[],char,int,int);

int main(void){
    system("cls");
    char str[20],ch;
    int index1,index2;
    printf("Enter a String: ");
    fgets(str,20,stdin);
    printf("Enter Character: ");
    scanf("%c",&ch);
    printf("Enter start index(inclusive) and end index(exclusive): ");
    scanf("%d %d",&index1,&index2);
    str[strlen(str)-1]='\0';
    printf("%d",string_char_find(str,ch,index1,index2));        
    return 0;
}

int string_char_find(char str[],char ch,int index1,int index2){
    int i,flag=0;
    for(i=index1;i<index2;i++)
        if(ch==str[i])
            {   flag=1;
                break;
            }
    if(flag)
        return i;
    else
        return -1;
}