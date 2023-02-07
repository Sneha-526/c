/*sum of even and odd numbers from 1 to N numbers */
#include<stdio.h>
//#include<conio.h>
void main()
{
    int n, i, odd=0,even=0;
    //clrscr();
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    printf("Sum of even numbers are: %d \nSum of odd numbers are: %d", even, odd);
    //getch();
}