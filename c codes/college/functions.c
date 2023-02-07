/*WAP to implement strlen(), strcat(), strcpy() using the concept of functions.*/
#include <stdio.h>

int my_strlen (char*);
char * my_strcat (char* , char* );
char * my_strcpy (char* , char* );

void main (void)
{
    char string_1 [20], string_2 [20];
    int length;

    printf ("Input first string: ");
    scanf("%s",string_1);
    
    printf ("Input second string: ");
    scanf("%s",string_2);
    
    length = my_strlen (string_1);
    printf ("\nLength of \"%s\": %d\n", string_1, length);
    length = my_strlen (string_2);
    printf ("Length of \"%s\": %d\n", string_2, length);
    
    my_strcat (string_1, string_2);
    printf ("\n***After concatenation***\n");
    printf ("First string: \"%s\"\n", string_1);
    printf ("Second string: \"%s\" ", string_2);
    
    my_strcpy (string_2, string_1);
    printf ("\n\n***After coping first string into second string***\n");
    printf ("First string: \"%s\"\n", string_1);
    printf ("Second string: \"%s\" ", string_2);
}
int my_strlen (char *string)
{
    int count = 0;
    
    //Finding length of string.
    while (string [count] != '\0')
    {
        count++;
    }
    
    return count;
}

char * my_strcat (char * string_1, char * string_2)
{
    int i, j;
    i = 0;
    while (string_1 [i] != '\0')
        i++;
    j = 0;
    while (string_2 [j] != '\0')
    {
        string_1 [i + j] = string_2 [j];
        j++;
    }
    string_1 [i + j] = '\0';
    
    return string_1;
}

char * my_strcpy (char * string_1, char * string_2)
{
    int i;
    i = 0;
    while (string_2 [i] != '\0')
    {
        string_1 [i] = string_2 [i];
        i++;
    }
    string_1 [i] = '\0';
    
    return string_1;
}