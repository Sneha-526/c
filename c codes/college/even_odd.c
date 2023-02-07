/*Q8 check whether the number is odd or even*/
#include<stdio.h>
//#include<conio.h>
void main()
{
    int a;
    //clrscr();
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a==0)
        printf(" he number is zero.");
    else if(a%2==0)
        printf("The number is even.");
    else
        printf("The number is odd");
    //getch();
}