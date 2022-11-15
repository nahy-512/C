#include <stdio.h>


int main() {
    FILE *infile;
    char line[100];
    int lcount = 0;

    if ((infile = fopen("charstream.txt", "r")) == NULL) {
        printf("File Could Not Be Opened.\n");
    }

    /* Get each line from the input file and write the line and line number to the screen */
    while (fgets(line, sizeof(line), infile) != NULL) {
        lcount++;
        printf("Line %d: %s", lcount, line);
    }

    fclose(infile);
}