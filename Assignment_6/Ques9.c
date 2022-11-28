#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int sides[3];
    printf("Enter three sides of a tringle: ");
    for(int i=0;i<3;i++)
    scanf("%d",&sides[i]);
    if(sides[0]<sides[1]+sides[2] && sides[1]<sides[2]+sides[0]&&sides[2]<sides[0]+sides[1])
    printf("Tringle is valid");
    else
        printf("Tringle is invalid");
    return 0;
}