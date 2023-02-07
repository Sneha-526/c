/*Q6 check whether two numbers entered by users are equal or not*/
#include<stdio.h>
//#inlcude<conio.h>
void main()
{
    int a,b;
    //clrscr();
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("The numbers are equal.");
    else if(a>b)
        printf("%d is largest.",a);
    else    printf("%d is largest.",b);
    //getch();
}