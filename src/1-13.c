#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char *argv[]) {
  int c;
  int histo[15];
  for(int i=0; i<15; ++i)
    histo[i]=0;

  int state = OUT;
  int curwordlen = 0;
  while((c=getchar()) != EOF)
    if ((c == ' ' || c == '\n' || c == '\t') && state == IN) {
      state = OUT;
      ++histo[curwordlen-1];
      curwordlen = 0;
    } else {
      state = IN;
      ++curwordlen;
    }


  printf("\nhisto size of 15:\n");
  for (int i=0; i<15; i++) {
    printf("[%d]:\t", i+1);
    for(int j=0; j<histo[i]; j++){
      printf("=");
    }
    putchar('\n');
  }
  return 0;
}
