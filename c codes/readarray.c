/* WAP to read marks of 5 students. Caluclate Sum and avg using array*/
#include<stdio.h>
void main()
{
    int marks[5],i;
    float sum=0,avg=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    avg=sum/5;
    printf("Sum = %f and average = %f",sum,avg);
}