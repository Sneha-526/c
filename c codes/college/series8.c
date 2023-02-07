#include<stdio.h>
#include<math.h>
void main()
{
    int n, i, sum=0, c=0, f=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum + pow(-1,c)*f;
        c++;
    }
    printf("Sum = %d",sum);
}