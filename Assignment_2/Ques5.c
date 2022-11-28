#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    int cp_dozen,sp_dozen;
    float profit;
    printf("Enter Cost Price of Bananas per dozen: ");
    scanf("%d",&cp_dozen);
    printf("Enter Selling Price of Bananas per dozen: ");
    scanf("%d",&sp_dozen);
    profit=((((float)sp_dozen-(float)cp_dozen)/12)*25);
    profit>0?printf("Profit on selling 25 bananas is %.1f",profit):printf("Loss on selling 25 bananas is %.1f",-1*profit);
    return 0;
}