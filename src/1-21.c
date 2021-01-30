#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 200


char* entab(const char *line, int len, int n) {
    char* entabbed = calloc(len, sizeof(char*));
    int spaces = 0;
    for(int i=0, j=0; i<len; i++, j++) {
        if (line[i]==' ') {
            ++spaces;
        }

        entabbed[j] = line[i];

        if (spaces==n) {
            spaces=0;
            j=j-n+1;
            entabbed[j] = '\t';
        }
        if (line[i]!=' '){
            spaces=0;
        }
    }
    return entabbed;
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

int main(int argc, char *argv[]) {
    int n=4;
    if (argc>=2) {
        n = strtol(argv[1], NULL, 10);
    }
    char line[MAXLINE];
    int len = 0;
    while((len=mygetline(line, MAXLINE))!=0) {
        printf("%s\n", entab(line, len, n));
    }

    return 0;
}


