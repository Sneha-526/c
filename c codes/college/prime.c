/*check whether a number is prime or not */
#include<stdio.h>
//#include<conio.h>
void main()
{
    int i, num, f=0;
    //clrscr();
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
            f=f+1;
        i++;
    }
    if(f==2)
        printf("The number is Prime.");
    else
        printf("The number is not Prime");
    //getch();
}