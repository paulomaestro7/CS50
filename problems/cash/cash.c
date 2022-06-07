#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int quartersValue = 25, dimesValue = 10, nickelsValue = 5, pennyValue = 1;

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * quartersValue;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * dimesValue;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * nickelsValue;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * pennyValue;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int centsOwed = 0;
    do
    {
        centsOwed = get_int("How much do you owed?\n");
    }
    while (centsOwed < 0);

    return centsOwed;
}

int calculate_quarters(int cents)
{
    int quarters = cents / quartersValue;
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = cents / dimesValue;
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = cents / nickelsValue;
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = cents / pennyValue;
    return pennies;
}
