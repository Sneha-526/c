/*WAP to receive marks of physics, chemistry and maths from 
user and check its eligibility for course if
a)  Marks Of Physics > 40
b)  Marks Of Chemisrty > 50
c)  Marks Of math > 60
d)  Total Of Physics and maths's marks > 150
or 
e)  Total of three subjects marks > 200*/
#include<stdio.h>
void main()
{
    float p,c,m,s1,s2;
    printf("Enter the number in Physics, chemistry and maths\n");
    scanf("%f%f%f",&p,&c,&m);
    s1=p+m;
    s2=p+c+m;
    if((p>40)&&(c>50)&&(m>60)&&(s1>150)||(s2>200))
        printf("You are eligiable");
    else
        printf("You are not eligiable");
}