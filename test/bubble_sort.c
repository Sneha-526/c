/*1. You are given an array(arr) of integers.
2. You have to sort the given array in increasing order using bubble sort.

Constraints
1 <= N <= 10000
-10^9 <= arr[i] <= 10^9

Format
Input
An Integer n 
arr1
arr2..
n integers

Output
Check the sample ouput and question video.

Example
Sample Input

5
7 
-2 
4 
1 
3

Sample Output
Comparing -2 and 7
Swapping -2 and 7
Comparing 4 and 7
Swapping 4 and 7
Comparing 1 and 7
Swapping 1 and 7
Comparing 3 and 7
Swapping 3 and 7
Comparing 4 and -2
Comparing 1 and 4
Swapping 1 and 4
Comparing 3 and 4
Swapping 3 and 4
Comparing 1 and -2
Comparing 3 and 1
Comparing 1 and -2
-2
1
3
4
7*/ 

// answer start
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, i, j, temp;
    int *a;
    printf("Enter the length of the list\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of list\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted list is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}