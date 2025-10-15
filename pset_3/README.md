# Week 3 – Algorithms

Searching: Linear Search, Binary Search. Sorting: Bubble Sort, Selection Sort, Merge Sort. Asymptotic Notation: O, Ω, Θ. Recursion.

## Files in this directory

- **[Plurality](https://cs50.harvard.edu/x/psets/3/plurality/)** – Simulates a [plurality election](https://en.wikipedia.org/wiki/Plurality_voting).
  - File: [`plurality/plurality.c`](pset_3/plurality/plurality.c)

- **[Runoff](https://cs50.harvard.edu/x/psets/3/runoff/)** – Simulates a ranked-choice [runoff election](https://en.wikipedia.org/wiki/Instant-runoff_voting).
  - File: [`runoff/runoff.c`](pset_3/runoff/runoff.c)

- **[Sort](https://cs50.harvard.edu/x/psets/3/sort/)** – A problem about identifying sorting algorithms based on their performance characteristics.
  - Directory: [`sort/`](pset_3/sort)

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
