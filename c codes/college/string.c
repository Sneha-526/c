#include<stdio.h>
#include<string.h>
void main()
{
    int l1,l2;
    char a[50], b[50], c[50], d[50];
    printf("Enter 1st string: \n");
    gets(a);
    printf("Enter 2nd string: \n");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    printf("Length of 1st string: %d\n",l1);
    printf("Length of 2nd string: %d\n",l2);
    strcat(a,b);
    printf("Cancotinating 1st string to 2nd string: ");
    puts(a);
    strcpy(c,a);
    strcpy(d,b);
    printf("copying 1st string to other string: ");
    puts(c);
    printf("copying 2nd string to other string: ");
    puts(d);

}