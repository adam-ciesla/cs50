#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string caesar_encrypt(string plaintext, int key);

int main(int argc, string argv[])
{
    // Checking if the input is correct
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string arg = argv[1];
    bool is_num = true;

    // Checking if there are any non-numerical characters in argv[1]
    for (int i = 0, n = strlen(arg); i < n; i++)
    {
        if (isdigit(arg[i]) == 0)
        {
            is_num = false;
        }
    }

    if (!is_num)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Asking for input
    string plaintext = get_string("plaintext: ");
    int key = atoi(argv[1]); // Converting to int
    string ciphertext = caesar_encrypt(plaintext, key);

    // Printing out the output
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}

string caesar_encrypt(string text, int key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];
        // Checking if char is a letter
        if (isalpha(c))
        {
            if (isupper(c)) // Uppercase
            {
                text[i] = (char) (((c - 'A') + key) % 26) + 'A';
            }
            else // Lowercase
            {
                text[i] = (char) (((c - 'a') + key) % 26) + 'a';
            }
        }
    }

    return text;
}
