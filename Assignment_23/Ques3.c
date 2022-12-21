#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
    system("cls");
    char str[100];
    int words=0;
    printf("Enter a String: ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    if(strlen(str)>0){
        for(int i=0;str[i];i++)
            if(str[i]==' '&&str[i-1]!=' ')
                words++;
        printf("Number of Words in Given String is %d",++words);        
    }
    else
     printf("Number of words in Given String is %d",words);
    return 0;
}