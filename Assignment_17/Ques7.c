#include <stdio.h>
#include <stdlib.h>
void hcf(int,int);
 
int main(void){
    system("cls");
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);
    hcf(a,b);
    return 0;
}
void hcf(int a,int b){
    if(a==0||b==0){
        if(a==0)
            printf("Hcf is: %d",b);
        if(b==0)
            printf("Hcf is: %d",a);
    }
    else
    a>b?hcf(a%b,b):hcf(a,b%a);        
}


// hcf using euclid's theoram