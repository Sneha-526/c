#include<stdio.h>
#include<string.h>

void main()
{
    int a, b, l1, l2, i;
    char x[50], y[50], z[50];
    printf("Enter 2 strings:\n");
    gets(x);
    gets(y);
    printf("Enter the values of integers\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number after swapping: \n");
    printf("a = %d\nb = %d\n",a,b);
    l1=strlen(x);
    l2=strlen(y);
    if(l1>=l2)
    {
        for(i=0;i<l1;i++)
        {
            z[i]=x[i];
            x[i]=y[i];
            y[i]=z[i];
        }
    }
    else
    {
        for(i=0;i<l2;i++)
        {
            z[i]=x[i];
            x[i]=y[i];
            y[i]=z[i];
        }
    }
    printf("Swapped strings are:\n");
    puts(x);
    puts(y);
}