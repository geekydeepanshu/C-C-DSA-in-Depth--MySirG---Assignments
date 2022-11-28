#include <stdio.h>

int main(void){
    float radius,area;
    printf("Enter Radius of circle in meters: ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is %.2f meter square having the radius %.1f meter",area,radius);
    return 0;
}