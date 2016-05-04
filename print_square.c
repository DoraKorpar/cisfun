#include <unistd.h>
#include <limits.h>
int print_char(char c);
void print_square(int);

int main(void) {
  print_square(1);
  print_square(2);
  print_square(3);
  print_square(4);
  print_square(10);
  print_square(-2);
  return (0);
}

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_square(int n) {
  /*this will print a square */
  int m;
  int p;
  int q;
  m = n - 2;
  p = m;
  q = m;

  if (n == 1) {
    print_char('o');
    print_char('\n');
  }
  if (n > 1) {
    print_char('o');
    while (m > 0) {
      print_char('-');
      m--;
    }
    print_char('o');
    print_char('\n');
    m = n - 2;

    while (p > 0) {
      print_char('|');
      while (q > 0) {
	print_char(' ');
	q--;
      }
      print_char('|');
      print_char('\n');
      q = n - 2;
      p--;
    }

    print_char('o');
    while (m > 0) {
      print_char('-');
      m--;
    }
    print_char('o');
    print_char('\n');
  }
  if (n < 1) {};
}
