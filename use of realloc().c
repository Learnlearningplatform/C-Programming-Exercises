#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n1,n2,i,sum=0;
    printf ("Enter the number of elements:\n");
    scanf ("%d", &n1);
    ptr = (int*)malloc(n1*sizeof(int));
    if (ptr == NULL)
    {
        printf ("Memory not allocated:\n");
        exit(0);
    }
    else
    {
        printf ("Memory successfully allocated:\n");
        for (i=0;i<n1;i++)
        {
            ptr[i] = i + 1;
        }
        printf ("Elements of the array are:\n");
        for (i=0;i<n1;i++)
        {
            printf ("%d,",ptr[i]);
        }
        printf ("Enter new size of the array:\n");
        scanf ("%d", &n2);
        ptr = realloc(ptr,n2*sizeof(int));
        printf ("Memory successfully reallocated:\n");
        for (i=n1;i<n2;i++)
        {
            ptr[i] = i + 1;
        }
        printf ("The elements of array:\n");
        for (i=0;i<n2;i++)
        {
            printf ("%d,",ptr[i]);
        }
        free(ptr);
    }
    return 0;
}
