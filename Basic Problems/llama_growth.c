#include <stdio.h>
#include <cs50.h>

int main (void)
{
    //prompting the user for the starting number of llamas
    int start;
    do
    {
        start = get_int("Starting number of llamas: ");
    }
    while (start < 9);

    //prompting them for an ending number of llamas
    int goal;
    do
    {
        goal = get_int("Goal number of llamas: ");
    }
    while (goal < start);

    //how many years will it take to the goal
    int years = 0;
    while (start < goal)
    {
        start += start / 12;
        years++;
    }
    printf("Years to reach the goal is %i.\n", years);
}
