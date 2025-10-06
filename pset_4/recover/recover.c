#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    // Check if file can be opened
    if (card == NULL)
    {
        printf("Could not open file.\n");
        fclose(card);
        return 1;
    }

    // Create a buffer
    uint8_t buffer[512]; // TODO: change 512 to sizeof()?

    // While there's still data left to read from the memory card
    while (fread(buffer, 1, 512, card) == 512)
    {
        
    }

        // Create JPEGs from the data


    // Number the output files: ###.jpg, i. e. 001.jpg, 002.jpg, 003.jpg, etc.


    // Close the memory card file
    fclose(card);
}