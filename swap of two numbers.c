#include <stdio.h>
int main()
{
    int n, a, reverse = 0;
    printf ("Enter the number\n");
    scanf ("%d", &n);
    while (n >= 1)
    {
        a = n % 10;
        reverse = reverse * 10 + a;
        n = n/10;
    }
    printf ("reverse =% d", reverse);
    return 0;
}
