#include<stdio.h>
#include<string.h>
void main()
{
    int n, i, j;
    char str[50][100], temp[100];
    printf("Enter the numbers of string\n");
    scanf("%d",&n);
    printf("Enter the string\n");
    for(i=0;i<=n;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcasecmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Your lexicographical order is: \n");
    for(i=0;i<=n;i++)
    {
        puts(str[i]);
    }
}