def greedy_algorithm(c):
    c = round(c * 100)  # Convert to int for accuracy
    times = 0

    while c > 0:
        if c >= 25:  # Quarters
            c -= 25
        elif c >= 10:  # Dimes
            c -= 10
        elif c >= 5:  # Nickels
            c -= 5
        else:  # Pennies
            c -= 1
        times += 1

    print(times)


def main():
    # Demand positive float input from the user
    while True:
        try:
            c = float(input("Change owed: "))
        except ValueError:
            continue
        if c >= 0.0:
            break

    greedy_algorithm(c)


if __name__ == "__main__":
    main()
