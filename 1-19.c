#include <stdio.h>
#define MAXLEN 1000


int mygetline(char line[], int maxlen);

void reverse(char line[], int len);

void cusprint(char line[], int len) {
  for(int i=0; i<len; i++) {
    putchar(line[i]);
  }
  putchar('\n');
}


int main(int argc, char *argv[]) {

  char line[MAXLEN];
  int len = 0;
 
  while ((len=mygetline(line, MAXLEN))>0) {
    if(len==1 && line[0]=='\n') {
      continue;
      printf("shit!\n");
    }
    reverse(line, len);
    cusprint(line, len);
  }
  return 0;
}

int mygetline(char line[], int maxlen) {
  int c, i;
  for (i=0; i<maxlen && (c=getchar())!='\n' && (c!=EOF); ++i)
    line[i] = c;
  if (c=='\n' && i<=0 ) {
    line[i] = c;
    ++i;
  }
  return i;
}

void reverse(char line[], int len) {
  for(int i=0, j=len-1; i<len/2; ++i, --j)
  {
    char tmp = line[j];
    line[j] = line[i];
    line[i] = tmp;
  }

}
