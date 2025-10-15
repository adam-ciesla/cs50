# Week 4 – Memory

Pointers. Segmentation Faults. Dynamic Memory Allocation. Stack. Heap. Buffer Overflow. File I/O. Images.

## Files in this directory

- **[Filter (less)](https://cs50.harvard.edu/x/psets/4/filter/less/)** – A command-line program applying filters (grayscale, sepia, reflect, blur) to bitmap images.
  - Directory: [`filter-less/`](pset_4/filter-less/)

- **[Filter (more)](https://cs50.harvard.edu/x/psets/4/filter/more/)** – The "less" version with an added edge detection filter using the [Sobel operator](https://en.wikipedia.org/wiki/Sobel_operator).
  - Directory: [`filter-more/`](pset_4/filter-more/)

- **[Recover](https://cs50.harvard.edu/x/psets/4/recover/)** – A program that recovers JPEG images from a forensic image of a memory card.
  - File: [`recover/recover.c`](pset_4/recover/recover.c)

- **[Volume](https://cs50.harvard.edu/x/psets/4/volume/)** – A program that modifies the volume of an audio WAV file.
  - File: [`volume/volume.c`](pset_4/volume/volume.c)

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
