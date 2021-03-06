#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Open puzzle input.
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");

    // Get numbers from puzzle input.
    int input[199];
    for (int i = 0; i < 200; i++)
        fscanf(inputFile, "%d", &input[i]);

    // Check all numbers for sum to 2020.
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 200; j++)
        {
            if (input[i] + input[j] == 2020)
            {
                printf("%i\n", input[i] * input[j]);
                return input[i] * input[j];
            }
        }
    }
}
