#include<stdio.h>
void main()
{
    int a[50], i, sum=0, n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of he elements is: %d",sum);
}