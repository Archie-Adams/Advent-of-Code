#include <stdio.h>

// Constants. -----------------------------------------------------------------
const int MAX_LINE_CHARS = 80;
const char PUZZLE_INPUT[] = "input.txt";

#define NUM_OF_FIELDS 7 // [0->n-1].
#define MAX_DATA_SIZE 20

// Globals. -------------------------------------------------------------------
// ----------------------------------------------------------------------------

// Structures for storing passports and their data. ---------------------------
typedef struct passportField
{
    char field[3];            // Three letter abbreviation.
    int available;            // Flag set to 1 if field is present.
    char data[MAX_DATA_SIZE]; // Value of the field.

} PassportField;

typedef struct passport
{
    PassportField fields[NUM_OF_FIELDS]; // Array of fields the passport has.
    int numOfValidFields;                // Count of passports fields [1->n].

} Passport;
// ----------------------------------------------------------------------------

// Prototype functions. -------------------------------------------------------
int getNumberOfPassports();
void readPassportDataToArray(Passport *passports[]);
// ----------------------------------------------------------------------------

void main()
{
    // Initialize array for storing passports.
    int numOfPassports = getNumberOfPassports();
    if (numOfPassports == -1)
        return;
    Passport passports[numOfPassports];

    // Populate array of passports.
    // readPassportDataToArray(&passports);
}

// Populates the passport array with data from PUZZLE_INPUT[].
void readPassportDataToArray(Passport *passports[])
{
    // Open puzzle input.
    FILE *inputFile;
    inputFile = fopen(PUZZLE_INPUT, "r");
    char c;
    while ((c = fgetc(inputFile)) != EOF)
    {
    }
}

// Returns number of passports by counting number of blank lines.
int getNumberOfPassports()
{
    FILE *inputFile = fopen(PUZZLE_INPUT, "r");

    int numberOfPassports = 0;
    char c, previousC;
    while ((c = fgetc(inputFile)) != EOF)
    {
        if (c == '\n' && previousC == '\n')
            numberOfPassports++;

        previousC = c;
    }

    fclose(inputFile);
    return numberOfPassports;
}