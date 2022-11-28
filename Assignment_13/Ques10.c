#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("Calculator Menu:- \n\n");
    printf("1. Calculate LCM of two Numbers: \n");
    printf("2. Calculate Sum of the digits of a number: \n");
    printf("3. Calculate Volume of Cuboid: \n");
    printf("4. Check whether a given number is Prime or not: \n");
    printf("5. Exit: \n\n");
}
int choice(){
    int choice;
    printf("Enter number from Menu to perforn an Operation: ");
    scanf("%d",&choice);
    printf("\n");
    return choice;
}

void lcm(){
    printf("--------------------------\n");
    printf("LCM of two Numbers: \n");
    printf("---------------------------\n\n");
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    int max=a>b?a:b;
    for(int i=1;1;i++){
        if(max*i%a==0 && max*i%b==0){
            printf("LCM:  %d",max*i);
            break;
        }
    }
    printf("\n\n");
}
 
int main(void){
    system("cls");
    int c;
    while(1){
        menu();
        c=choice();
        switch (c)
        {
        case 1:
            lcm();
            break;
        case 2:
            lcm();
            break;
        case 3:
            lcm();
            break;
        case 4:
            lcm();
            break;
        case 5:
            exit(0);
            break;                
        
        default:
        printf("Invalid Choice!");
            break;
        }
    }
    return 0;
}