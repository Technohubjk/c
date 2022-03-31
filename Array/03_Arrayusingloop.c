#include<stdio.h>

int main()
{
    int marks[5];
    for(int i=0 ;i<5; i++)
    {
        printf("Enter the value of marks for student is %d\n :",i);
        scanf("%d",&marks[i]);
         

    }
    for(int  i=0;i<5;i++)
    {
        printf("The value of a marks for student %d is : \n",i+1,marks[1]);

    }

    return 0;

}