/*WAP to sort the elements of the array in ascending order using bubble sort technique.*/
#include<stdio.h>
void main()
{
    int a[50], n, i, p, c;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements of the list \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(p=1;p<n;p++)
    {
        for(i=0;i<=n-1-p;i++)
        {
            if(a[i]>a[i+1])
            {
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
            }
        }
    }
    printf("The sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}