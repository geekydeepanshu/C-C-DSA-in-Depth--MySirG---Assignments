#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void string_reverse(char[]);
 
int main(void){
    system("cls");
    char str[50],str_temp[50],str_rev_word[50]={0},str_temp_index=0;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(int s=0;s<=strlen(str);s++){
        if(str[s]!=' '){
            str_temp[str_temp_index]=str[s];
            str_temp_index++;
        }
        if((str[s]==' '&&str[s-1]!=' ')||(str[s]=='\0')){
            str_temp[str_temp_index]='\0';
            string_reverse(str_temp);
            strcat(str_rev_word,str_temp);
            str_temp_index=0;
        }
        if(str[s]==' ')
            str_rev_word[s]=' ';       
    }
    string_reverse(str_rev_word);
    printf("String after reversing String is: %s",str_rev_word);
    return 0;
}

void string_reverse(char str[]){
    char temp;
    for(int i=0;i<strlen(str)/2;i++){
        temp=str[i];
        str[i]=str[strlen(str)-1-i];
        str[strlen(str)-1-i]=temp;
    } 
}
