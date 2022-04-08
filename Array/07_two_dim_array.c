#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3];
    {
    printf("Enter the 9 numbers of first matrix\n",A[3][3]);
    for(int i=0;i<=2;i++)

    for(int j=0;j<=2;j++)
    scanf("%d",&A[i][j]);
    }
    {
        printf("Enter the 9 numbers of second matrix\n",B[3][3]);
        for(int i=0;i<=2;i++)

    for(int j=0;j<=2;j++)
    scanf("%d",&A[i][j]);
    }
    for(int i=0;i<=2;i++)
    {
        for (int j=0;j<=2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d  ",C[i][j]);
        
        }
        printf("\n");

    }
    return 0;



}