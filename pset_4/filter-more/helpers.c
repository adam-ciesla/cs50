#include "helpers.h"
#include <math.h>
#include <stdio.h>

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
            int averageValue = (int) round((redValue + greenValue + blueValue) / 3.0);

            // Set each colour value to the average
            image[i][j].rgbtRed = averageValue;
            image[i][j].rgbtGreen = averageValue;
            image[i][j].rgbtBlue = averageValue;
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
            image[i][j] = image[i][width - j - 1];
            image[i][width - j - 1] = temp;
        }
    }
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of the original image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    // Iterate through each row
    for (int i = 0; i < height; i++)
    {
        // Iterate through each pixel in that row
        for (int j = 0; j < width; j++)
        {
            float redSum = 0.0, greenSum = 0.0,
                  blueSum = 0.0; // Sum of all RGB values of surrounding pixels
            int counter = 0;     // Count of pixels that are important

            // Iterate over the (3x3) neighbourhood around (i, j) including (i,j)
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di;
                    int nj = j + dj;

                    // Checking if we haven't reached outside the bitmap
                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        redSum += copy[ni][nj].rgbtRed; // Referring to the original image
                        greenSum += copy[ni][nj].rgbtGreen;
                        blueSum += copy[ni][nj].rgbtBlue;

                        counter++;
                    }
                }
            }

            // Setting each RGB value to the average of the values in the (3x3) neighbourhood
            image[i][j].rgbtRed = (int) round(redSum / counter);
            image[i][j].rgbtGreen = (int) round(greenSum / counter);
            image[i][j].rgbtBlue = (int) round(blueSum / counter);
        }
    }
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of the original image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    // Create Gx and Gy convolutional matrices
    int Gx[3][3] = {
        {-1, 0, 1},
        {-2, 0, 2},
        {-1, 0, 1}
    }; 

    int Gy[3][3] = {
        {-1, -2, -1},
        {0, 0, 0},
        {1, 2, 1}
    };

    // Iterate through each pixel
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int gxRed = 0, gyRed = 0;
            int gxGreen = 0, gyGreen = 0;
            int gxBlue = 0, gyBlue = 0;

            // Iterate over the (3x3) neighbourhood of the pixel
            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    int ni = i + di;
                    int nj = j + dj;

                    // Checking if we haven't reached outside the bitmap
                    if (ni >= 0 && ni < height && nj >= 0 && nj < width)
                    {
                        
                    }

                }
            }

            int redMagnitude;
            int blueMagnitude;
            int greenMagnitude;

            // Check if any of the calculated values exceeds the maximum of 255
            if (redMagnitude > 255)
            {
                redMagnitude = 255;
            }
            if (greenMagnitude > 255)
            {
                greenMagnitude = 255;
            }
            if (blueMagnitude > 255)
            {
                blueMagnitude = 255;
            }

            // Set colour values
            image[i][j].rgbtRed;
            image[i][j].rgbtGreen;
            image[i][j].rgbrBlue;
        }
    }
}
