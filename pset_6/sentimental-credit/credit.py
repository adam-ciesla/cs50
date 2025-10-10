def luhn_algorithm(credit: str) -> None:
    checksum = 0

    # Multiplying every second digit by 2, starting with the number's second-to-last digit
    for digit in credit[-2::-2]:
        doubled_num = int(digit) * 2
        # If the number * 2 is a 2-digit number, we add its digits
        if doubled_num > 9:
            digit1 = doubled_num % 10
            digit2 = doubled_num // 10
            checksum += digit1 + digit2
        else:
            checksum += doubled_num

    # Sum of the digits that weren't multiplied by 2, starting from the end
    for digit in credit[::-2]:
        checksum += int(digit)

    # Deciding whether the credit card number is valid
    if checksum % 10 != 0:
        print("INVALID")
        return  # Terminate function

    # Deciding what kind of a credit card it is
    length = len(credit)

    if length == 15 and credit[:2] in ['34', '37']:
        print("AMEX")
    elif length == 16 and credit[:2] in ['51', '52', '53', '54', '55']:
        print("MASTERCARD")
    elif length in [13, 16] and credit[0] == '4':
        print("VISA")
    else:
        print("INVALID")


def main():
    while True:
        credit = input("Number: ")
        # Checking if the input is all numeric
        if credit.isdigit():
            break

    luhn_algorithm(credit)


if __name__ == "__main__":
    main()
