#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 200

char *detab(const char line[], int len, int n) {
  char *detabbed = calloc(len * n, sizeof(char *));
  for (int i = 0, j = 0; i < len; i++, j++) {
    if (line[i] == '\t') {
      int s;
      for (s = 0; s < n; s++) {
        detabbed[j + s] = ' ';
      }
      j = j + s - 1;
    } else {
      detabbed[j] = line[i];
    }
  }
  return detabbed;
}

int mygetline(char line[], int maxlen) {
  int c, i;
  for (i = 0; i < maxlen && (c = getchar()) != '\n' && (c != EOF); ++i)
    line[i] = c;
  if (c == '\n' && i <= 0) {
    line[i] = c;
    ++i;
  }
  return i;
}

int main(int argc, char *argv[]) {
  int n = 4;
  if (argc >= 2) {
    n = strtol(argv[1], NULL, 10);
  }
  char line[MAXLINE];
  int len = 0;
  while ((len = mygetline(line, MAXLINE)) != 0) {
    printf("%s\n", detab(line, len, n));
  }
  return 0;
}
