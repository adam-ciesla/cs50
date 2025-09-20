#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string s);
int count_words(string s);
int count_sentences(string s);
void print_grade_level(string s);

int main(void)
{
    // Prompt user for text
    string text = get_string("Text: ");
    print_grade_level(text);
}

int count_letters(string s)
{
    int letters = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            letters += 1;
        }
    }

    return letters;
}

int count_words(string s)
{
    int words = 1; // We can assume there is always at least one word

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == ' ')
        {
            words += 1;
        }
    }

    return words;
}

int count_sentences(string s)
{
    int sentences = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            sentences += 1;
        }
    }

    return sentences;
}

void print_grade_level(string s)
{
    int letters = count_letters(s);
    int words = count_words(s);
    int sentences = count_sentences(s);

    float L = ((float) letters / (float) words) * 100; // average number of letters per 100 words
    float S =
        ((float) sentences / (float) words) * 100; // average number of sentences per 100 words

    // Calculate the Coleman-Liau index
    int index = (int) round(0.0588 * L - 0.296 * S - 15.8);

    // Print out the grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index <= 16)
    {
        printf("Grade %i\n", index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}
