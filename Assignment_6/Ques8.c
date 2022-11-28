#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if(ch<=57 && ch>=48)
        printf("Digit");
    else if(ch<=90 && ch>=65)
        printf("Upper Case Character");
    else if (ch<=122 && ch>=97)
        printf("Lower Case Characters");
    else    
        printf("Special Character");    
    return 0;
}