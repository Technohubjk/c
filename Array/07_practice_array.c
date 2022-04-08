#include<stdio.h>
int marin()
{
    int arr[10];
    //int *ptr=&arr[0];
    int *ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
      printf("These point to the location in memory \n");
        
    }

}