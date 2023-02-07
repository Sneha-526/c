#include<stdio.h>
void main()
#define N 50
{
    int a[N][N],det=0,i,j,n;
    float adj,inv;
    printf("Enter the order of matrix\n");
    scanf("%d",&n);
    printf("Enter the values of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        det=det+(a[0][j]*(a[1][(j+1)%3]*a[2][(j+2)%3]-a[2][(j+1)%3]*a[1][(j+2)%3]));
    }
    if(det==0)
        printf("Determinant is zero.");
    else
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                adj=(a[(j+1)%3][(i+1)%3]*a[(j+2)%3][(i+2)%3]-a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3]);
                inv=adj/det;
                printf("%f\t",inv);
            }
            printf("\n");
        }
    }
}