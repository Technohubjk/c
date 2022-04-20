#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int length,breath;
    printf("Enter length and breadth\n :");
    cin>>length>>breath;
    int area=length*breath;
    int peri=2*(length+breath);
    printf("area=%d\nPerimeter=%d\n",area,peri);

return 0;

}