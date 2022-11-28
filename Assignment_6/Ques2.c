#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    system("cls");
    float cost_price,selling_price,margin;
    printf("Enter Cost Price: ");
    scanf("%f",&cost_price);
    printf("Enter Selling Price: ");
    scanf("%f",&selling_price);
    margin=selling_price-cost_price;
    margin>=0?printf("Profit Percentage is %.2f",margin*100/cost_price):printf("Loss Percentage is %.2f",-1*margin*100/cost_price);
    return 0;
}