#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf ("\n Enter any character in upper case: ");
    scanf ("%c", &ch);
    printf ("\n The character in lower case is =% c", ch+32);
    return 0;
}
