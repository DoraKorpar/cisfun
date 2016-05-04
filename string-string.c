#include <stdio.h>
#include <stdlib.h>

char *string_string(char *, char *);

int main(void) {
  char *ret;
  char *haystack = "Holberton";
  char *needle = "ton";
  ret = string_string(haystack, needle);
  printf("The substring is: %s\n", ret);
  return (0);
}
  

char *string_string(char *haystack, char *needle) {
  /* rewriting strstr */
  int i;
  int j;
  int k;
  char *s = malloc(sizeof(char *));
  i = 0;
  j = 0;
  k = 0;
  while (needle[i] != '\0') {
    while (haystack[j] != '\0') {
      if (needle[i] == haystack[j]) {
	i++;
	j++;
	s[k] = needle[i];
	k++;
      }
      if (needle[i] != haystack[j]) {
	j++;
      }
    } 
  }
  return(s);
}
