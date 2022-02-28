#include<stdio.h>
#include<conio.h>
int main()
{
    float area,radius;
    printf("Enter radius :");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of the circle %6.2f",area);
    return 0;
}