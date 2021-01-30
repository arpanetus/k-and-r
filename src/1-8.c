#include <stdio.h>

int main(int argc, char *argv[]) {

  int c, nl, nb, nt;
  nl = 0;
  nb = 0;
  nt = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++nt;
    if (c == ' ')
      ++nb;
  }
  printf("newlines:\n\t%d\nblanks:\n\t%d\ntabs:\n\t%d\n", nl, nb, nt);
  return 0;
}
