/*WAP to input 2x2 matrix and soe of its value*/
#include<stdio.h>
void main()
{
    int a[2][3],i,j,sum=0;
    printf("Enter the elements of 2D array:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum=%d",sum);
}