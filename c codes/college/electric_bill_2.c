/*WAP to calculate and print the electricity bill of a customer. The cusomer ID and 
unit consumed is entered by the user through keyboard.
                unit                        charges/unit
    upto 199                                @1.20
    more than 200 but less than 400         @1.50
    more than 400 but less than 600         @1.80
    600 and above                           @2.00
If bill exceeds Rs.400, a surcharge of 15% will be charged. 
Minimum bill should be atleast 100*/
#include<stdio.h>
//#include<conio.h>
void main()
{
    int unit, CID;
    float charges = 0;
    //clrscr();
    printf("Enter your customer ID:\n");
    scanf("%d", &CID);
    printf("Enter your consumption units:\n");
    scanf("%d", &unit);
    if(unit<=199)
        charges=unit*1.2;
    else if((unit<400)&&(unit>=200))
        charges=unit*1.5;
    else if((unit<600)&&(unit>=400))
        charges=unit*1.8;
    else    charges=unit*2;
    
    if(charges>400)
    {
        charges=charges+(charges*15)/100;
        printf("Your total bill is: %f\n",charges);
    }
    else if(charges<100)
    {
        charges=100;
        printf("Your total bill is: %f\n",charges);
    }
    else
        printf("Your total bill is: %f\n",charges);
    //getch();
}