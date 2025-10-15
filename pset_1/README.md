# Week 1 – C

C. Source Code. Machine Code. Compiler. Correctness, Design, Style. Visual Studio Code. Syntax Highlighting. Escape Sequences. Header Files. Libraries. Manual Pages. Types. Conditionals. Variables. Loops. Linux. Graphical User Interface (GUI). Command-Line Interface (CLI). Constants. Comments. Pseudocode. Operators. Integer Overflow. Floating-Point Imprecision.

## Files in this directory

- **[Cash](https://cs50.harvard.edu/x/psets/1/cash/)** – Implements a [greedy algorithm](https://en.wikipedia.org/wiki/Greedy_algorithm) to calculate the minimum number of coins for change.
  - File: [`cash/cash.c`](pset_1/cash/cash.c)

- **[Credit](https://cs50.harvard.edu/x/psets/1/credit/)** – Validates credit card numbers using the [Luhn algorithm](https://en.wikipedia.org/wiki/Luhn_algorithm).
  - File: [`credit/credit.c`](pset_1/credit/credit.c)

- **[Mario (less)](https://cs50.harvard.edu/x/psets/1/mario/less/)** – Prints a right-aligned pyramid of hashes (`#`).
  - File: [`mario-less/mario.c`](pset_1/mario-less/mario.c)

- **[Mario (more)](https://cs50.harvard.edu/x/psets/1/mario/more/)** – Prints two adjacent pyramids of hashes (`#`).
  - File: [`mario-more/mario.c`](pset_1/mario-more/mario.c)

- **[Hello, It's Me](https://cs50.harvard.edu/x/psets/1/me/)** – A "hello, world" program that prompts the user for their name.
  - File: [`me/hello.c`](pset_1/me/hello.c)

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
