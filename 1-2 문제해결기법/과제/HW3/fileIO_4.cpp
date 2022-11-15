#include <stdio.h>

int main() {
    int i;
    FILE* myFile;
    myFile = fopen("myinFile.txt", "r"); 

    /* Read the input file one character at a time
      and write the character to the screen */
    if (myFile == NULL)
        printf("\nFile Could Not Be Opened");
    else {
        char ch = fgetc(myFile);
        while (ch != EOF) {
            putchar(ch);
            ch = fgetc(myFile);
        }
        printf("\nFinished printing the file \n");
    }
    fclose(myFile);
}