#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int length(long n);
int first_1_digit(long n);
int first_2_digits(long n);
void lunds_algorithm(long credit);

int main(void)
{
    long credit;
    int len;

    credit = get_long("Number: ");

    lunds_algorithm(credit);
}

int length(long n) // Checking the length of a long
{
    int len = 0;

    while (n > 0)
    {
        n /= 10;
        len += 1;
    }

    return len;
}

int first_1_digit(long n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return (int) n; // long -> int
}

int first_2_digits(long n)
{
    while (n >= 100)
    {
        n /= 10;
    }
    return (int) n;
}

void lunds_algorithm(long credit)
{
    int len = length(credit);

    int sum_1 = 0;
    int sum_2 = 0;
    long temp_1 = credit;
    long temp_2 = credit;

    // Multiplying every second digit, starting with the number's second-to-last digit
    temp_1 /= 10;

    while (temp_1 > 0)
    {
        int num = (temp_1 % 10) * 2;
        if (num > 9)
        {
            int digit_1 = num % 10;
            num /= 10;
            int digit_2 = num;
            sum_1 += digit_1 + digit_2;
        }
        else
        {
            sum_1 += num;
        }
        temp_1 /= 100;
    }

    // Sum of the digits that weren't multiplied by 2, starting from the end
    while (temp_2 > 0)
    {
        sum_2 += temp_2 % 10;
        temp_2 /= 100;
    }

    // Deciding whether the credit card number is valid
    bool is_valid;
    int sum = sum_1 + sum_2;
    if ((sum % 10) == 0)
    {
        is_valid = true;
    }
    else
    {
        is_valid = false;
    }

    // Deciding what kind of a credit card it is
    if (is_valid == true)
    {
        // American Express
        if ((len == 15) && (first_2_digits(credit) == 34 || first_2_digits(credit) == 37))
        {
            printf("AMEX\n");
        }
        // MasterCard
        else if ((len == 16) && (first_2_digits(credit) >= 51 && first_2_digits(credit) <= 55))
        {
            printf("MASTERCARD\n");
        }
        // Visa
        else if ((len == 13 || len == 16) && (first_1_digit(credit) == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
