#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // Function prompts the user for a number of cents using get_int
    // If the user inputs a negative int, your code should prompt the user again
    int cents;
    do
    {
        cents = get_int("Change: ");
    } while(cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    // Function calculates how many quarters a customer should be given based on a number of cents
    int count = 0;
    while(cents >= 25)
    {
        count++;
        cents = cents - 25;
    }
    return count;
}

int calculate_dimes(int cents)
{
    // Function calculates how many dimes the customer should be given based on the number of cents
    int count = 0;
    while(cents >= 10)
    {
        count++;
        cents = cents - 10;
    }
    return count;
}

int calculate_nickels(int cents)
{
    // function calculates how many nickels a customer should be given based on the number of cents
    int count = 0;
    while(cents >= 5)
    {
        count++;
        cents = cents - 5;
    }
    return count;
}

int calculate_pennies(int cents)
{
    // Function calculates how many pennies the customer is given based on the number of cents
    int count = 0;
    while(cents >= 1)
    {
        count++;
        cents = cents - 1;
    }
    return count;
}
