/* Print the sum of all numbers upto a given number */
#include<stdio.h>
//#include<conio.h>
void main()
{
    int n, i, sum=0;
    //clrscr();
    printf("Enter the number: \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum += i;
    }
    printf("Sum of Numbers are: %d",sum);
    //getch();
    
}