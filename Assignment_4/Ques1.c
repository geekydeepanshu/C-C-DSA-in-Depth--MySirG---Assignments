#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int n,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n/1000)
        printf("Given Number is not a three digit number");
    else    
    {
        for(int i=0;n;i++){
            sum+=n%10;
            n/=10;
        }
        printf("Sum is %d",sum);
    }
    return 0;
}