#include<stdio.h>
#define N 50
void main()
{
    int a[N][N],b[N][N],c[N][N],m,n,p,q,i,j,k,sum;
    printf("Enter the numbers of rows and columns of matrix a\n");
    scanf("%d%d",&m,&n);
    printf("Enter the values of matrix a\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the numbers of rows and columns of matrix b\n");
    scanf("%d%d",&p,&q);
    printf("Enter the values of matrix of b\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nMatrix A=:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B=:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    if (n!=p)
    {
        printf("cannot be multiplied");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum=0;
                for(k=0;k<m;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        printf("multiplication is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}