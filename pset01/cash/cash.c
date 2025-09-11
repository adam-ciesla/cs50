#include <cs50.h>
#include <stdio.h>

void greedy_algorithm(int c);

int main(void)
{
    int c; // Change owed
    do
    {
        c = get_int("Change owed: ");
    }
    while (c < 0);
    greedy_algorithm(c);
}

void greedy_algorithm(int c)
{
    int times = 0;

    while (c > 0)
    {
        if (c >= 25)
        {
            c -= 25;
            times += 1;
        }
        else if (c >= 10)
        {
            c -= 10;
            times += 1;
        }
        else if (c >= 5)
        {
            c -= 5;
            times += 1;
        }
        else
        {
            c -= 1;
            times += 1;
        }
    }

    printf("%i\n", times);
}
