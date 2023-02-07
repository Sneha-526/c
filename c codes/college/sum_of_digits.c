/*Sum of digits of entered number */
#include<stdio.h>
//#inlcude<conio.h>
void main()
{
    int num, sum=0, r;
    //clrscr();
    printf("Enter a number:\n");
    scanf("%d", &num);
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of digits are: %d", sum);
    //getch();
}