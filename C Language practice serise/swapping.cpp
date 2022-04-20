#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,swap;
    cout<<"Enter first number :\n";
    cin>>a;
    cout<<"Enter second number :\n";
    cin>>b;

    swap=a;
    a=b;
    b=swap;
    //1
  cout<<"After swaping :\n";
    cout<<"first integer="<<a<<endl;
    cout<<"second integer="<<b<<endl;
    return 0;
}