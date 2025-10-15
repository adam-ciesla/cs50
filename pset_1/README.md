# Week 1 – C

C. Source Code. Machine Code. Compiler. Correctness, Design, Style. Visual Studio Code. Syntax Highlighting. Escape Sequences. Header Files. Libraries. Manual Pages. Types. Conditionals. Variables. Loops. Linux. Graphical User Interface (GUI). Command-Line Interface (CLI). Constants. Comments. Pseudocode. Operators. Integer Overflow. Floating-Point Imprecision.

## Files in this directory

- `cash/cash.c` – [Cash](https://cs50.harvard.edu/x/psets/1/cash/). Implements a [greedy algorithm](https://en.wikipedia.org/wiki/Greedy_algorithm) to calculate the minimum number of coins needed for change.

- `credit/credit.c` – [Credit](https://cs50.harvard.edu/x/psets/1/credit/). Implements the [Luhn algorithm](https://en.wikipedia.org/wiki/Luhn_algorithm).

- `mario-less/mario.c` – [Mario (less)](https://cs50.harvard.edu/x/psets/1/mario/less/). Prints a pyramid of hashes (#).

- `mario-more/mario.c` – [Mario (more)](https://cs50.harvard.edu/x/psets/1/mario/more/). Prints a pyramid of hashes (#), slightly harder.

- `me/hello.c` – [Hello, It's Me](https://cs50.harvard.edu/x/psets/1/me/). A *"hello, world"* program with name input.

- `world/hello.c` – [Hello, World](https://cs50.harvard.edu/x/psets/1/world/). A simple *"hello, world"* program.

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
# Compiles the hello.c file into an executable file named hello
make hello

# Runs the program
./hello
