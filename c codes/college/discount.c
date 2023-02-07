/*In a billing system, a certain amount of discount is given.
If total purchase less than 500 no discount
If total purchase is more than 500 and less than 1000, 10% discount
If total purchase is more than 1000 and less than 5000, 20% discount
If total purchase is more than 5000’ 30% discount
W.A.P to calculate total bill of a customer.*/
#include<stdio.h>
//#include<conio.h>
void main()
{
    float amt,dis;
    //clrscr();
    printf("Enter your total bill:\n");
    scanf("%f",&amt);
    if(amt<500)
        dis=0;
    else if((amt<=1000)&&(amt>=500))
        dis=amt*10/100;
    else if((amt<=5000)&&(amt>1000))
        dis=amt*20/100;
    else
        dis=amt*30/100;
    amt=amt-dis;
    printf("Your total amount after discount is: %f\n",amt);
    //getch();
}