#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, temp;
    printf ("\n Enter the both numbers: ");
    scanf ("%d%d", &num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf ("\n After swapping the numbers are =%d,%d", num1, num2);
    return 0;
}
