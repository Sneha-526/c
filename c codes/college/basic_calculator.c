/*WAP of basic calculator*/
#include<stdio.h>
//#include<conio.h>
void main()
{
    char op;
    float a,b,c=0;
    //clrscr();
    printf("Enter the operator\n");
    scanf("%c",&op);
    printf("Enter the operands:\n");
    scanf("%f%f",&a,&b);
    switch(op)
    {
        case '*':
            c=a*b;
            printf("%f %c %f = %f\n",a,op,b,c);
            break;
        case '/':
            c=a/b;
            printf("%f %c %f = %f\n",a,op,b,c);
            break;
        case '+':
            c=a+b;
            printf("%f %c %f = %f\n",a,op,b,c);
            break;
        case '-':
            c=a-b;
            printf("%f %c %f = %f\n",a,op,b,c);
            break;
        default:
            printf("INVALID OPERATOR");
    }
    //getch();
}