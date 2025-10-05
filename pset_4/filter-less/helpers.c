#include "helpers.h"
#include "math.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate through each row of the image
    for (int i = 0; i < height; i++)
    {
        // Iterate through each pixel in that row
        for (int j = 0; j < width; j++)
        {
            int redValue = image[i][j].rgbtRed;
            int greenValue = image[i][j].rgbtGreen;
            int blueValue = image[i][j].rgbtBlue;

            // Calculate the average pixel value for grayscale effect
            int averageValue = (int)round((redValue + greenValue + blueValue) / 3.0);

            // Set each colour value to the average
            image[i][j].rgbtRed = averageValue;
            image[i][j].rgbtGreen = averageValue;
            image[i][j].rgbtBlue = averageValue;
        }
    }
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate through each row of the image
    for (int i = 0; i < height; i++)
    {
        // Iterate through each pixel in that row
        for (int j = 0; j < width; j++)
        {
            int redValue = image[i][j].rgbtRed;
            int greenValue = image[i][j].rgbtGreen;
            int blueValue = image[i][j].rgbtBlue;

            // Calculate the sepia value for each colour
            int sepiaRed = (int)round(.393 * redValue + .769 * greenValue + .189 * blueValue);
            int sepiaGreen = (int)round(.349 * redValue + .686 * greenValue + .168 * blueValue);
            int sepiaBlue = (int)round(.272 * redValue + .534 * greenValue + .131 * blueValue);

            // If any of the sepia values exceeds the max of 255, set it to 255
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            // Set each colour value to the sepia value
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate through each row
    for (int i = 0; i < height; i++)
    {
        // Iterate through each pixel to the middle of the row
        for (int j = 0; j < width / 2; j++)
        {
            // Change values of pixels on the opposite sites of the row
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - j];
            image[i][width - j] = temp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
