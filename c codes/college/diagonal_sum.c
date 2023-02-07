/*WAP hat finds the sum of diagonal elements of a m*n matrix.*/
#include<stdio.h>
void main()
{
    int a[50][50], i, j, sum=0, n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements of first %d x %d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                sum=sum+a[i][j];
        }
    }
    printf("Sum of diagonal=%d",sum);
}