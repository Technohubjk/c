#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("the value of i is %d\n",i);
        if (i==40)
        {
         break;
        }
        i++;
        

    } while (i<40);
    return 0;
    
}