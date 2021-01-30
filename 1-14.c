#include <stdio.h>
#define HISTSIZE 94

int main(int argc, char *argv[]) {

  int c;
  int histo[HISTSIZE];
  for(int i=0; i<HISTSIZE; ++i)
    histo[i]=0;
  

  while((c=getchar()) != EOF){
    int idx = c - '!';
    if (idx >= 0 && idx<HISTSIZE) {
      ++histo[c - '!'];
    }
 }


  printf("\nhisto size of 94:\n");
  for (int i=0; i<HISTSIZE; i++) {
    printf("[%c]:\t", i+'!');
    for(int j=0; j<histo[i]; j++){
      printf("=");
    }
    putchar('\n');
  }


  return 0;
}
