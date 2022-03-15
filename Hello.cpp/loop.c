#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :\n");
    scanf("%d",&age);
    if(age==1)
    {
        printf("Your age is ine :1",age);

    }
    else if(age==2)
    {
        printf("Your age is 2",age);
    }
    else if (age==3)
    {
        printf("Your age is 3",age);
    }
    

    // if(age<=79 && age>=18)
    // {
    //     printf("you are above 18 and below 79,you can drive \n");

    // }
    else
    {
        printf("Its not 1 or 2 or 3",age); 
    }
   

}

