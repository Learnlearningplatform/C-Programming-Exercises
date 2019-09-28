#include <stdio.h>
#include <conio.h>
int main()
{
    int num_of_10_coins, num_of_5_coins, num_of_2_coins, num_of_1_coins;
    float total_amount;
    printf ("\n Enter the number of rs 10 coins in piggybank: ");
    scanf ("%d", &num_of_10_coins);
    printf ("\n Enter the number of rs 5 coins in piggybank: ");
    scanf ("%d", &num_of_5_coins);
    printf ("\n Enter the number of rs 2 coins in piggybank: ");
    scanf ("%d", &num_of_2_coins);
    printf ("\n Enter the number of rs 1 coins in piggubank: ");
    scanf ("%d", &num_of_1_coins);
    total_amount = num_of_10_coins*10 + num_of_5_coins*5 + num_of_2_coins*2 + num_of_1_coins*1;
    printf ("\n Total amount in the bank = %f", total_amount);
    return 0;
}
