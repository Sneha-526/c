#include<stdio.h>
#include<windows.h>
void main()
{
    COORD c;
    c.X = 40;
    c.Y = 13;
    char username[20], password[20];
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    printf("USERNAME:");
    gets(username);
    printf("PASSWORD:");
    gets(password);
    printf("SIGN IN");

}