#include<stdio.h>
#include<iostream>
using namespace std;


int area(int leangth,int breadth)


{
return leangth*breadth;
}
int perimeter(int leangth,int breadth)
{
    int p;
    p=2*(leangth+breadth);
    return p;

}
int main()
{ 
    int leangth,breadth;

    printf("Enter the leagth and breadth");
    cin>>leangth>>breadth;
    int a =area(leangth,breadth);
    int peri=perimeter(leangth,breadth);

    printf("Area=%d\nPerimeter=%d\n",a,peri);
    return 0;
}