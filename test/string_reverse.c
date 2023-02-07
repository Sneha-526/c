#include<stdio.h>
#include<string.h>
void main()
{
    char x[50], y[50];
    int i, l;
    printf("Enter the string:\n");
    gets(x);
    l=strlen(x);
    for(i=0;i<l;i++)
    {
        y[i]=x[l-1-i];
    }
    printf("Reversed string:\n");
    puts(y);
}