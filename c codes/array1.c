#include<stdio.h>
void main()
{
    int n, c, sum=0, prudt=1, i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Enter you choice:\n1, for printing sum \n2, for printing product\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
            for(i=1;i<=n;i++)
            {
                sum=sum+i;
            }
            printf("sum= %d",sum);
            break;
        case 2:
            for(i=1;i<=n;i++)
            {
                prudt=prudt*i;
            }
            printf("product= %d ",prudt);
            break;
        default:
            printf("-1\n");
    }
}