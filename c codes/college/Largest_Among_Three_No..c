/*Q7 check he largest among three numbers*/
#include<stdio.h>
//#include<conio.h>
void main()
{
    int a,b,c;
    //clrscr();
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b)&&(a==c))
        printf("The numbers are equal.");
    else if((a>=b)&&(a>=c))
        printf("%d is largest.",a);
    else if((b>=a)&&(b>=c))
        printf("%d is the largest.",b);
    else
        printf("%d is the largest.",c);
    //getch();
}