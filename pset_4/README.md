# Week 4 – Memory

Pointers. Segmentation Faults. Dynamic Memory Allocation. Stack. Heap. Buffer Overflow. File I/O. Images.

## Files in this directory

- `filter-less/` – [Filter (less comfortable)](https://cs50.harvard.edu/x/psets/4/filter/less/). A command-line program to apply filters to images such as grayscale, sepia, reflect and blur.

- `filter-more/` – [Filter (more comfortable)](https://cs50.harvard.edu/x/psets/4/filter/more/). Same as the "less" version with the addition of an edge detection filter using the [Sobel operator](https://en.wikipedia.org/wiki/Sobel_operator).

- `recover/recover.c` – [Recover](https://cs50.harvard.edu/x/psets/4/recover/). A program that restores JPEG images from a [RAW image file](https://en.wikipedia.org/wiki/Raw_image_format) from a memory card.

- `volume/volume.c` - [Volume](https://cs50.harvard.edu/x/psets/4/volume/). A program that modifies the volume of a [WAV file](https://docs.fileformat.com/audio/wav/).

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
