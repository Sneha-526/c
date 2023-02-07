#include<stdio.h>

void main()
{
    int flag=0,i;
    char s1[30],s2[30];
    printf("Enter string1:\n");
    gets(s1);
    printf("Enter string2:\n");
    gets(s2);
    for(i=0;s1[i]!='\0'&& s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not Same\n");
    }
}