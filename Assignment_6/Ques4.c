#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    char ch;
    printf("Enter a Alphabet: ");
    scanf("%c",&ch);
    if(ch<=90 && ch>=65)
        printf("Upper Case Character");
    else if (ch<=122 && ch>=97)
        printf("Lower Case Characters");
    return 0;
}