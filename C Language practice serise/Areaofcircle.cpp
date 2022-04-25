#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    float area,radius;
    cout<<"Enter radius\n";
    cin>>radius;
    area=3.14*radius*radius;
    printf("Area : %6.2f",area);
    return 0;
}