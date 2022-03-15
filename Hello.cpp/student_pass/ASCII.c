#include<stdio.h>
int main()
{
    //97-122 =ato z
    char ch; 
    printf("Enter the charater\n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("It is lower case\n",ch);
    }
    else{
        printf(   "it is not lowercase\n");
    }
  
  return 0;       
}