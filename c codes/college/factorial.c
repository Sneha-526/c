/* printing the factorial of the given number */
#include<stdio.h>
//#include<conio.h>
void main()
{
    int num, f=1, i;
    //clrscr();
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        f=f*i;
    }
    printf("Factorial of the number %d is %d", num, f);
    //getch();
}