#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;
  int was_blank = 0;
  while((c=getchar()) != EOF)
  {
    if(c != ' ')
    {
      putchar(c);
      was_blank = 0;
    }

    if(c == ' ' && was_blank == 0)
    {
      putchar(c);
      was_blank = 1;
    }
  }
  return 0;
}
