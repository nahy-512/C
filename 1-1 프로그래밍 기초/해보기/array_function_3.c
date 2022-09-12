#include <stdio.h>
//string2를 string1로 복사하는 함수

void strcopy(char [], char []); /* prototype */

int main(){
  char string1[30], string2[30];
  printf("Enter the string: ");
  gets(string2);

  strcopy(string1, string2);

  return 0;
}

void strcopy(char str1[], char str2[]) /* definition */
{
  int i = 0;
  while (str2[i]){
    str1[i] = str2[i];
    i++;
  }
  str1[i] = '\0';
  puts(str1);
}