#include<stdio.h>
void main()
{
    int i, n, a[50], max, min;
    printf("Enter the values of n\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Maximum= %d\nMinimum= %d",max,min);
}