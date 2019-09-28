#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, *ptr1;
    int n, i, sum=0;
    printf ("Enter the number of elements:\n");
    scanf ("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    ptr1 = (int*)calloc(n,sizeof(int));
    if (ptr == NULL || ptr1 == NULL)
    {
        printf ("Memory not allocated:\n");
        exit(0);
    }
    else
    {
        printf ("Memory successfully allocated using malloc:\n");
        for (i=0;i<n;i++)
        {
            ptr[i] = i + 1;
        }
        printf ("The elements of the array are:\n");
        for (i=0;i<n;i++)
        {
            printf ("%d,", ptr[i]);
        }
        free(ptr);
        printf ("Malloc memory successfully freed:\n");
        printf ("Memory successfully allocated using calloc:\n");
        for (i=0;i<n;i++)
        {
            ptr1[i] = i + 1;
        }
        printf ("The elements of the array are:\n");
        for (i=0;i<n;i++)
        {
            printf ("%d,", ptr1[i]);
        }
        free(ptr1);
        printf ("Calloc memory successfully freed:\n");

    }
    return 0;
}
