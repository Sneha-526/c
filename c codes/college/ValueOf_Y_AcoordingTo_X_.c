/*WAP to find the value of Y for a particular value n. The
a, x, b, n is input by user
if n=1  y=ax%b
if n=2  y=ax2+b2
if n=3  y=a-bx
if n=4  y=a+x/b*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    int a,x,b,y;
    clrscr();
    printf("Enter the value of a,b and x\n");
    scanf("%d%d%d",&a,&b,&x);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            y=(a*x)%b;
            printf("%d is the value of y",y);
            break;
        case 2:
            y=(a*x*x)+b*b;
            printf("%d is the value of y",y);
            break;
        case 3:
            y=a-b*x;
            printf("%d is the value of y",y);
            break;
        case 4:
            y=a+x/b;
            printf("%d is the value of y",y);
            break;
        default:
            printf("invalid value of n");
    }
    getch();
}