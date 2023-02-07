#include<stdio.h>
void main()
{
    int n, i, sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum + 1/i;
    }
    printf("Sum = %d",sum);
}