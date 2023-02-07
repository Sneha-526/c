#include<stdio.h>
void main()
{
    int n, i, j, k, s=0, sp;
    printf("Enter the value  of n:\n");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(sp=0;sp<s;sp++)
            {
                printf("\t");
            }
            for(j=0;j<=i;j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
        s+=n;
    }

}