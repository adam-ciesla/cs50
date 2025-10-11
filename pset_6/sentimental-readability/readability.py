def main():
    text = input("Text: ")
    print_grade_level(text)


def coleman_liau_index(L: float, S: float) -> int:
    return round(0.0588 * L - 0.296 * S - 15.8)


def count_letters(s: str) -> int:
    return sum(1 for ch in s if ch.isalpha())


def count_words(s: str) -> int:
    # We can assume there is always at least one word at the beggining of the text:
    # we then only need to count all the spaces between words to find the number of all words
    return 1 + sum(1 for ch in s if ch == ' ')


def count_sentences(s: str) -> int:
    # We can assume that every sentence ends with either a dot, a question mark, or an
    # exclamation mark
    return sum(1 for ch in s if ch in ['.', '?', '!'])


def print_grade_level(text: str) -> None:
    letters = count_letters(text)
    words = count_words(text)
    sentences = count_sentences(text)

    # L - average number of letters per 100 words and
    # S - average number of sentences per 100 words
    L = (letters / words) * 100
    S = (sentences / words) * 100

    # Calculate the Coleman-Liau index
    index = coleman_liau_index(L, S)

    # Print out the grade level
    if index < 1:
        print("Before Grade 1")
    elif 1 <= index <= 16:
        print(f"Grade {index}")
    else:
        print("Grade 16+")


if __name__ == "__main__":
    main()
