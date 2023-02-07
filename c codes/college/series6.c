#include<stdio.h>
#include<math.h>
void main()
{
    int n, i, sum=0, f=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f;
    }
    printf("Sum = %d",sum);
}