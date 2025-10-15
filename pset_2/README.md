# Week 2 – Arrays

Preprocessing. Compiling. Assembling. Linking. Debugging. Arrays. Strings. Command-Line Arguments. Cryptography.

## Files in this directory

- **[Caesar](https://cs50.harvard.edu/x/psets/2/caesar/)** – Implements the [Caesar cipher](https://en.wikipedia.org/wiki/Caesar_cipher) for text encryption.
  - File: [`caesar/caesar.c`](pset_2/caesar/caesar.c)

- **[Readability](https://cs50.harvard.edu/x/psets/2/readability/)** – Estimates the reading level of a text using the [Coleman-Liau index](https://en.wikipedia.org/wiki/Coleman%E2%80%93Liau_index).
  - File: [`readability/readability.c`](pset_2/readability/readability.c)

- **[Scrabble](https://cs50.harvard.edu/x/psets/2/scrabble/)** – A simple game of [Scrabble](https://en.wikipedia.org/wiki/Scrabble) that determines the winning word between two players.
  - File: [`scrabble/scrabble.c`](pset_2/scrabble/scrabble.c)

## How to run

All programs in this set are written in **C**. You will need a compiler (e.g., `clang` or `gcc`) and the `make` tool to run them.
If you're using the [CS50 IDE](cs50.dev), everything is preinstalled.

1.  **Compile**: To compile a program, use the `make` command followed by the filename without the `.c` extension. This command will create an executable file with the same name.

    ```bash
    make <program_name>
    ```

2.  **Execute**: To run the compiled program, type `./` followed by its name.

    ```bash
    ./<program_name>
    ```

**Example:**

```bash
# Compiles hello.c into an executable file
make hello

# Runs the program
./hello
