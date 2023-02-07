#include<stdio.h>
void main()
{
    int i, j, k, s, n, x=0;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    s=n-1;
    for(i=0;i<n;i++)
    {
        for(k=1;k<=s;k++)
        {
            printf("   ");
        }
        s--;
        for(j=1;j<=2*i+1;j++)
        {
            if(j<=((2*i+1)/2)+1)
            {
                x++;
                if(x>=10)
                    printf("%d ",x);
                else
                    printf("%d  ",x);
            }
            else
            {
                x--;
                if(x>=10)
                    printf("%d ",x);
                else
                    printf("%d  ",x);
            }
        }
        printf("\n");
    }
}