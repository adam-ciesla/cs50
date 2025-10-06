# Week 4 – Memory

Pointers. Segmentation Faults. Dynamic Memory Allocation. Stack. Heap. Buffer Overflow. File I/O. Images.

## Files in this directory

- `filter-less/` – [Filter (less comfortable)](https://cs50.harvard.edu/x/psets/4/filter/less/). A command-line program to apply filters to images such as grayscale, sepia, reflect and blur.
- `filter-more/` – [Filter (more comfortable)](https://cs50.harvard.edu/x/psets/4/filter/more/). Same as the "less" version with the addition of an edge detection filter using the [Sobel operator](https://en.wikipedia.org/wiki/Sobel_operator).
- `recover/recover.c` – [Recover](https://cs50.harvard.edu/x/psets/4/recover/). A program that restores JPEG images from a [RAW image file](https://en.wikipedia.org/wiki/Raw_image_format) from a memory card.
- `volume/volume.c` - [Volume](https://cs50.harvard.edu/x/psets/4/volume/). A program that modifies the volume of a [WAV file](https://docs.fileformat.com/audio/wav/).

## How to run

All programs in this set are written in **C**.

To compile a program, use `make` followed by the filename (without `.c`). 

```bash
make example
./example
