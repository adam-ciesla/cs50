def main():
    # Demand input between 1 and 8
    while True:
        try:
            h = int(input("Height: "))
        except ValueError:
            continue
        if h >= 1 and h <= 8:
            break

    # Print a half-pyramid made out of hashes
    for i in range(1, h + 1):
        hashes = i
        spaces = h - i
        print(' ' * spaces, end='')
        print('#' * hashes, end='')
        print()


if __name__ == "__main__":
    main()
