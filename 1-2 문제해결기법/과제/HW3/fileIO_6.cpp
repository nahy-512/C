#include <stdio.h>

int main() {
    FILE *myInFile, *myOutFile;
    char ch;

    myInFile = fopen("data.txt", "r");
    if (myInFile == NULL) {
        printf("Could not open data.txt!\n");
    }
    myOutFile = fopen("samedata.txt", "w");
    if (myOutFile == NULL) {
        printf("Could not open samedata.txt!\n");
    }

    /* Read the input file one character at a time, and wrire 
        the character to the output file */
    while ((ch = fgetc(myInFile)) != EOF)
        fputc(ch, myOutFile);
    fclose(myInFile);
    fclose(myOutFile);
}