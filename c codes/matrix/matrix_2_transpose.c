/*WAP to transpose a matrix*/
#include<stdio.h>
void main()
{
    int a[6][6],i,j;
    printf("Enter the values of matrix \n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}