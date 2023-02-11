
/*
Prem has stored few confendential numbers in an array of integers. 
To ensure that others do not find the numbers eassily, he has applied a simple encodiing 
Encoding used:
1- Revers the original array orig_arr[] to rev_arr[].
2- Each array element is subsituted with  a value which is the sum of its original value and 
its succeeding element's value i.e., orig_arr[last index] should remain unchanged.
*/
#include<stdio.h>
void main()
{
    int orig_arr[50], rev_arr[50], i, n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&orig_arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        rev_arr[i]=orig_arr[(n-1)-i];
    }
    rev_arr[n-1]=orig_arr[n-1];
    for(i=0;i<n-1;i++)
    {
        rev_arr[i]=rev_arr[i]+rev_arr[i+1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",rev_arr[i]);
    }
}