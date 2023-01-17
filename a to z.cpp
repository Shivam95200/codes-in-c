#include <stdio.h>
int main() {
  char ch;
  //Print characters from 'A' to 'Z'
  for (ch = 'A'; ch <= 'Z'; ++ch)
    //there is a whitespace after %c so that the
    //characters have spaces in between.
    printf("%c ", ch);
  return 0;
}
