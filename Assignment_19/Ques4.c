#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n[5],rotation,temp;
    char direction;
    printf("Enter 5 Numbers: ");
    for(int i=0;i<5;i++)
        scanf("%d",&n[i]);
    printf("Enter number of position to which Array is to rotated: ");
    scanf("%d",&rotation);
    printf("Enter direction of rotation[l/r]: ");
    fflush(stdin);
    scanf("%c",&direction);
    switch (direction)
    {
    case 'l':
        for(int j=1;j<=rotation;j++)
            for(int i=0;i<4;i++){
                temp=n[i];
                n[i]=n[i+1];
                n[i+1]=temp;
            }
        break;
    case 'r':
        for(int j=1;j<=rotation;j++){
            for(int i=0;i<4;i++){
                temp=n[4-i];
                n[4-i]=n[4-i-1];
                n[4-i-1]=temp;
            }
        }   
        break; 
    default:
        printf("Invalid Direction!");
        break;
    }
    printf("\n");
    for(int i=0;i<5;i++)
        printf("%d ",n[i]);
    return 0;
}