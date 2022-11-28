#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;   
    case 'b' ... 'd':
    case 'f' ... 'h':
    case 'j' ... 'n':
    case 'p' ... 't':
    case 'v' ... 'z':
    case 'B' ... 'D':
    case 'F' ... 'H':
    case 'J' ... 'N':
    case 'P' ... 'T':
    case 'V' ... 'Z':
        printf("Consonant");
        break;    
    default:
        printf("Special Character");
        break;
    }
    return 0;
}