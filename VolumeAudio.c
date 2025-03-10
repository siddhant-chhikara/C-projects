// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    
    uint8_t header[HEADER_SIZE];

    size_t bytesRead = fread(header, sizeof(uint8_t), HEADER_SIZE, input);

    if (bytesRead < HEADER_SIZE) {
        printf("Could not read header from input file.\n");
        return 1;
    }

    size_t bytesWritten = fwrite(header, sizeof(uint8_t), HEADER_SIZE, output);

    if (bytesWritten < HEADER_SIZE) {
        printf("Could not write header to output file.\n");
        return 1;
    }

    const int SAMPLE_SIZE = 4;

    int16_t buffer;

    while (fread(&buffer, sizeof(int16_t), 1, input))
    {

        buffer *= factor;

        if (fwrite(&buffer, sizeof(int16_t), 1, output) != 1)
        {
            printf("Could not write sample to output file.\n");
            return 1;
        }
    }

    // Close files
    fclose(input);
    fclose(output);
}