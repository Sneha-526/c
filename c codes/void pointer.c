#include<stdio.h>
void main()
{
    int a = 5;
    float b = 1.11;
    char c = 'o';
    void *vp;
    vp=&a;
    printf("%d\n",*(int*)vp);
    vp=&b;
    printf("%f\n",*(float*)vp);
    vp=&c;
    printf("%c\n",*(char*)vp);
}