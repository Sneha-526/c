/*Printing the  fibonacci series */
#include<stdio.h>
//#include<conio.h>
void main()
{
    int n, a=-1, b=1, c, i;
    //clrscr();
    printf("Enter the number of times you want print fibonacci series: \n");
    scanf("%d", &n);
    printf("Your fibonacci series is: ");
    for(i=0; i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ", c);
    }
    //getch();

}