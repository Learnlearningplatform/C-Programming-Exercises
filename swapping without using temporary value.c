#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2;
    printf ("\n Enter both numbers: ");
    scanf ("%d%d", &num1, &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf ("\n After swapping the numbers are = %d%d", num1, num2);
    return 0;
}
