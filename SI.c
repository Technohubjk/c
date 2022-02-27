#include<stdio.h>
void main()
{
    float interest,p,r,n;
    printf("Enter the value of p: ");
    scanf("%f",&p);
    printf("Enter the value of r: ");
    scanf("%f",&r);
    printf("Enter the value of n: ");
    scanf("%f",&n);
    interest=p*n*r/100;
    printf("Simple interest :%f",interest);
    getch();


}