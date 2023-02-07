#include<stdio.h>
#include<math.h>
void main()
{
    int n, i, sum=0, c=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum + pow(-1,c)*i;
        c++;
    }
    printf("Sum = %d",sum);
}