#include <stdio.h>
int main() {
    int a, sum = 0;
    FILE *inFile, *outFile;

    inFile = fopen("myinFile.txt", "r");
    if (inFile == NULL) {
        printf("Input File Could Not Be Opened.");
    };
    outFile = fopen("myoutFile.txt", "w");
    if (outFile == NULL) {
        printf("Output File Could Not Be Opened.");
    };

    /* Read and sum the integers from the input file and write the sum to the output file */
    while (fscanf(inFile, "%d", &a) != EOF) /* loops until EOF */
        sum += a;
    fprintf (outFile, "The sum is %d \n", sum);

    fclose (inFile);
    fclose (outFile);

    return 0;
}