#include <cs50.h>
#include <stdio.h>

// function declarations
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);

    // Subtract the value of those quarters from cents
    cents = cents - quarters * 25;

    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);
    // Subtract the value of those dimes from remaining cents
    cents = cents - dimes * 10;

    // Calculate how many nickels you should give customer
    int nickels = calculate_nickels(cents);
    // Subtract the value of those nickels from remaining cents
    cents = cents - nickels * 5;

    // Calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);
    // Subtract the value of those pennies from remaining cents
    cents = cents - pennies * 1;

    // Sum the number of quarters, dimes, nickels, and pennies used
    int sum = quarters + dimes + nickels + pennies;

    // Print that sum
    printf("%d\n", sum);
}

//  Calculate how many quarters you should give customer
int calculate_quarters(int cents)
{
    return cents / 25;
}

// Calculate how many dimes you should give customer
int calculate_dimes(int cents)
{
    return cents / 10;
}

// Calculate how many nickels you should give customer
int calculate_nickels(int cents)
{
    return cents / 5;
}

// Calculate how many pennies you should give customer
int calculate_pennies(int cents)
{
    return cents / 1;
}
