#include<stdio.h>
int main()
{
    int math,physics,chemistry;
    float total;

    printf("Enter physics mark\n");
    scanf("%d",&physics);

    printf("Enter math mark\n");
    scanf("%d",&math);

    printf("Enter chemistry mark\n");
    scanf("%d",&chemistry);

   total=(physics+chemistry+math)/3;

   if ((total<40)||physics<33||math<33||chemistry<33)
   {
   
   printf("your total percentage is %f and you  are fail\n",total);
   }
 else
   {
       printf("your total percentage is %f and you  are pass \n",total);

   }
   return 0;
   

}