/*Write a program in C to read an integer from the keyboard
add 1 to it if the number is even
add 1 again if number is less than 20
otherwise keep the number unchanged*/
#include<stdio.h>
//#include<conio.h>
void main()
{
    int a;
    //clrscr();
    printf("Enter an integer;\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        a=a+1;
        if(a<20)
            a=a+1;
    }
    printf("Your integer afer modification is: %d\n",a);
    //getch();
}