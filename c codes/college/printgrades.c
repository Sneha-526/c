/*Q10 print grades of a student*/
#include<stdio.h>
//#inlcude<conio.h>
void main()
{
    float a,b,c,d,e,p=0;
    //clrscr();
    printf("Enter the marks of the student:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/500*100;
    if((p>=90)&&(p<=100))
        printf("\nGRADE A");
    else if((p>=80)&&(p<90))
        printf("\nGRADE B");
    else if((p>=60)&&(p<80))
        printf("\nGRADE c");
    else
        printf("\nGRADE D")
}