#include <stdio.h>
//문장 단어 수 세기

int word_count(char []); /* prototype */

int main(void) {
  char str[30];
  printf("Enter the sentense: ");
  gets(str);

  printf("\nthe number of words in the string is: %d", word_count(str));

  return 0;
}

int word_count(char string[])
{
  int i = 0, j = 1;
  while (string[i]) {
    if (string[i] == ' ')
      j++;
    i++;
  }
  return j;
}