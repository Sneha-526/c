/*Q9 check whether the year is leap year or not*/
#include<stdio.h>
//#include<conio.h>
void main()
{
    int y;
    //clrscr();
    printf("Enter the year:\n");
    scanf("%d",&y);
    (y%400==0)||(y%4==0)&&(y%100!=0)?printf("The year is leap year"):
    printf("The year is not a leap year");
    //getch();
}