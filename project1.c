#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    int number,guess ,nguess=1;
    srand(time(0));
    number=rand()%100+1;
    printf("The number is : %d\n",number);
    // keep running the loop until the number is gussed
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please!\n");
        }
        else if(guess<number)
        {
            printf("Higher number plese!\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n",nguess);
        }

    } while (guess!=number);
    
   return 0;

}