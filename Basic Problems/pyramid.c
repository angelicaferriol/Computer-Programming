#include <cs50.h>
#include <stdio.h>

void print_row(int height);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    print_row(n);
}

void print_row(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
            for (int m = 1; m <= i; m++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
