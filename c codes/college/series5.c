#include<stdio.h>
#include<math.h>
void main()
{
    int n, i, sum=0, c=0, x;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("enter the value x\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        sum=sum + pow(x,c)/i;
        c++;
    }
    printf("Sum = %d",sum);
}