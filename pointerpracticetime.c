#include<stdio.h>
int main()
{
    int a=6;
    int *ptr;
    ptr =&a;
    printf("the address of  variable a is %u\n",ptr);
    printf("The value of variable a %d\n ",*ptr);
 return 0;
}