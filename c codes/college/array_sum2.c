#include<stdio.h>
void main()
{
    int a[50], b[50], c[50], i, n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the elements of the first array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    printf("New array is:\n");
    for(i=0;i<n;i++){
        c[i]=a[i]+b[i];
        printf("%d\t",c[i]);
    }
}