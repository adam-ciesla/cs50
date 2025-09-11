#include <cs50.h>
#include <stdio.h>

void create_pyramid(int h);

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    create_pyramid(h);
}

void create_pyramid(int h)
{
    for (int i = 1; i <= h; i++)
    {
        int hashes = i;
        int spaces = h - i;
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hashes; j++)
        {
            printf("#");
        }

        printf("  ");

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
