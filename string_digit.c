#include <stdio.h>
int string_digit(char *s);

int main(void) {
  int p;
  int q;
  int r;
  int t;
  p = string_digit("");
  q = string_digit("No numbers");
  r = string_digit("23059");
  t = string_digit("Nugo4093u89u");
  printf("%d\n", p);
  printf("%d\n", q);
  printf("%d\n", r);
  printf("%d\n", t);
  return (0);
}



int string_digit(char *s) {
  int i;
  i = 0;
  while (s[i] != '\0') {
    if (s[i] < '0' || s[i] > '9') {
      return (0);
    }
    i++;
  }
  return (1);
}
