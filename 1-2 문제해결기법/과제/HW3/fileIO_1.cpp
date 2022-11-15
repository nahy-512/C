#include <stdio.h>

int main() {
    int i;
    FILE *myFile;
    double price[2] = {139.25, 19.03};
    char *description[2] = {"glove", "CD"};
    
    /* Write the product data stored in the description array and price array to the output file */

    myFile = fopen("price.txt", "w");
    if (myFile == NULL)
        printf("\nFile Could Not Be Opened");
    else
    {
        for (i = 0; i < 2; i++)
            fprintf (myFile, "%-9s %6.2f\n", description[i], price[i]);
        fclose (myFile);
    }
}