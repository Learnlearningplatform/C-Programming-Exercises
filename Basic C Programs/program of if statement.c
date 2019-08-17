/**
 * C program to check if a person is eligible to vote or not.
 */

#include <stdio.h>
int main()
{
    /* Variable declaration to store age */
    int age;
    /* Input age from user */
    printf("Enter your age: ");
    scanf("%d", &age);
    /* Use relational operator to check age */
    if(age >= 18)
    {
        /* If age is greater than or equal 18 years */
        printf("You are eligible to vote in India.");
    }
    return 0;
}
