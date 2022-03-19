#include<stdio.h>
int  factorial(int x);
int main()
{    
   int a=5;
   printf("The value of factorial %d is %d \n",a,factorial(a));
   scanf("%d",&a);
    return 0;
}

int factorial(int x)
{   
    printf("calling factorial(%d)\n");
    if(x==1 || x==0)
    {
        return 0;
    }
    else
    {
      return  x*factorial(x-1);
    }

}