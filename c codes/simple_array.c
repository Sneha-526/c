#include<stdio.h>
void main()
{
    int i,avg,sum=0;
    int marks[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the marks \n");
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    avg=sum/5;
    printf("Average marks= %d \n",avg);
}