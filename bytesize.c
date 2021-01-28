#include <stdio.h>

int main ()
{
    // Variables
    char characternumber = sizeof(char);
    short shortnumber = sizeof(short);
    int intnumber = sizeof(int);
    float floatnumber = sizeof(float);
    long longnumber = sizeof(long);
    long long extralongnumber = sizeof(long long);
    double doublenumber = sizeof(double);

    // Display variables
    printf("Type char has the size of: %u\n", characternumber);
    printf("Type short has the size of: %u\n", shortnumber);
    printf("Type int has the size of: %u\n", intnumber);
    printf("Type float has the size of: %u\n", floatnumber);
    printf("Type long has the size of: %u\n", longnumber);
    printf("Type long long has the size of: %u\n", extralongnumber);
    printf("Type double has the size of: %u\n", doublenumber);

    return 0;
}