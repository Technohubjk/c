#include<stdio.h>
int main()
{
    int i,prime=1,n;
    printf("Enter a number :\n",n);
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("The number is not prime number :\n",n);
            break;

        }

    }
    printf("The number is a prime number \n");
    return 0;
}