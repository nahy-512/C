/* Function Defenition Only */

#include <stdio.h>
#include <string.h>
#define NUM 5


void strcopy(char [100], char [100]);

int main() {
    int str1[100], str2[100];

    printf("Enter the sentences: ");

    for (int i = 0; i < NUM; i++) {
        scanf("%s", &str2[i]);
    }

    strcopy(str1, str2);
}

void strcopy(char string1[], char string2[]) {
    int i = 0;
    while (string2[i] != '\0') {
        string1[i] = string2[i];
        i++;
    }
    string1[i] = '\0';
    gets(string1);
}