#include<stdio.h>
void main()
{
    int basic;
    float da, hra, allow, pf;
    char grade;
    printf("Enter your grade:\n");
    fflush(stdin);
    scanf("%c",&grade);
    printf("Enter your basic salary:\n");
    scanf("%d",&basic);
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if((grade=='A')||(grade=='a'))
        allow=1700;
    else if((grade=='B')||(grade=='b'))
        allow=1500;
    else
        allow=1300;
    basic=basic+hra+da+allow-pf;
    printf("Your total salary= %d",basic);
}