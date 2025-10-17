import csv
from sys import exit, argv


def main():

    # Check for command-line usage
    if len(argv) != 3 or not argv[1].endswith('.csv') or not argv[2].endswith('.txt'):
        print("Usage: python dna.py data.csv sequence.txt")
        exit(1)

    # Read database file into a variable
    data = []
    with open(argv[1]) as file:
        reader = csv.DictReader(file)
        for d in reader:
            data.append(d)

    # Read DNA sequence file into a variable
    with open(argv[2]) as file:
        dna = file.read()

    # Extract list of STRs from the first row, excluding the 'name' column
    strs = list(data[0].keys())[1:]

    # Find longest match of each STR in DNA sequence
    results = {}
    for s in strs:
        results[s] = longest_match(dna, s)

    # Check database for matching profiles
    for person in data:
        match = True
        for s in strs:
            if int(person[s]) != results[s]:
                match = False
                break
        if match:
            print(person['name'])
            return
    print("No match")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1
            # If there is no match in the substring
            else:
                break
        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


if __name__ == "__main__":
    main()
