#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n],start=0,end=n-1,temp,i;
    printf("Enter the values in your array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("\nReversed array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}