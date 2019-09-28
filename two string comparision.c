#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    printf ("Enter the first string:\n");
    gets(str1);
    printf ("Enter the second string:\n");
    gets(str2);
    if (strcmp(str1,str2) == 0)
        printf ("The string are equal");
    else
        printf ("The string are not equal");
        return 0;
}
