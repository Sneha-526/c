/*An electric power distribution company changes its domestic consumers as follows
    Consumption units		            Rate of charge
        0-200					Rs. 0.50 per unit
        201-400			        Rs. 100 + Rs.0.65 per unit excess of 200
        401-600			        Rs. 230 + Rs.0.80 per unit excess of 400
        601 & above		    	Rs. 390 + Rs.1.00 per unit excess of 600
W.A.P to enter the unit consumed by the user along with users customer id and
calculate the chargesz to be paid by the user.*/
#include <stdio.h>
// #include<conio.h>
void main()
{
    int unit, CID;
    float charges = 0;
    printf("Enter your customer ID:\n");
    scanf("%d", &CID);
    printf("Enter your consumption units:\n");
    scanf("%d", &unit);
    if (unit <= 200)
        charges = charges * 0.50;
    else if ((unit <= 400) && (unit >= 201))
        charges = 100 + 0.65 * (unit - 200);
    else if ((unit <= 600) && (unit >= 401))
        charges = 230 + 0.80 * (unit - 400);
    else
        charges = 390 + 1.00 * (unit - 600);
    printf("ID no. %d has total bill: %f\n", CID, charges);
    // getch();
}