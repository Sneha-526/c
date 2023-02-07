/*WAP to search an element in an array using Linear Search.*/
#include<stdio.h>
void main()
{
    int a[50], i, n, item, c=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter he element to be searched\n");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item==a[i]){
            c++;
        }
    }
    if(item==0){
        printf("Element not found");
    }
    else{
        printf("Element found");
    }
}