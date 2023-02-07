#include<stdio.h>
void main()
{
    int arr1[5],i;
    printf("Enter the numbers in array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Your array is:\n[");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("]\n");
    for(i=0;i<5;i++)
        {if((arr1[i]>=arr1[i-1])&&(arr1[i]>=arr1[i+1]))
        {
            printf("\n%d",arr1[i]);
        }
    }
    
}