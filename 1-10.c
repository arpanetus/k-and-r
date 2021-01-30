#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;

  while((c=getchar())!=EOF)
  {
    if (c=='\b')
    {
      putchar('\\');
      putchar('b');
    }
    else if (c=='\t')
    {
      putchar('\\');
      putchar('t');
    }
    else {
      putchar(c);
    }
  }
  return 0;
}
