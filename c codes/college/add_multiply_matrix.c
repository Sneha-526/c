/*WAP to add and multiply two matrices of order n*n.*/
#include<stdio.h>
void main()
{
    int i, j, k, n, a[10][10], b[10][10], c[10][10], sum;
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
    printf("Enter the elements of second %d x %d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of the matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("multiplication is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}