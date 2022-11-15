#include <stdio.h>

int main() {
    FILE* myFile;
    char ch;

    myFile = fopen("data.txt", "r");
    if (myFile == NULL) {
        printf("Could not open data.txt!\n");
    }

    /* Read the input file one character at a time, and write
      the character to the screen */
    while ((ch = fgetc(myFile)) != EOF)
        putchar(ch);
    fclose(myFile);
}