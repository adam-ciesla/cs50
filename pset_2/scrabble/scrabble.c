#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int give_points(string s);
void compare_points(string a, string b);

int main(void)
{
    string a = get_string("Player 1: ");
    string b = get_string("Player 2: ");

    compare_points(a, b);
}

int give_points(string s)
{
    int points[26] = {
        1,  // A
        3,  // B
        3,  // C
        2,  // D
        1,  // E
        4,  // F
        2,  // G
        4,  // H
        1,  // I
        8,  // J
        5,  // K
        1,  // L
        3,  // M
        1,  // N
        1,  // O
        3,  // P
        10, // Q
        1,  // R
        1,  // S
        1,  // T
        1,  // U
        4,  // V
        4,  // W
        8,  // X
        4,  // Y
        10  // Z
    };

    int p = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        char c = toupper(s[i]);
        if (c >= 'A' && c <= 'Z') // Handling non-alphabetic characters
        {
            int index = c - 'A';
            p += points[index];
        }
    }

    return p;
}

void compare_points(string a, string b)
{
    // Give points to Player 1
    int p_1 = give_points(a);

    // Give points to Player 2
    int p_2 = give_points(b);

    // Decide who wins
    if (p_1 > p_2)
    {
        printf("Player 1 wins!\n");
    }
    else if (p_1 < p_2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
