
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "mylang.h"
/*
typedef enum enm {
  number = 1,
  string = 2,
} type;

typedef struct {
  int type;
  char name[32];
} Token;
*/
void usage()
{
    printf("usage: mylang sorce_code\n");
    printf("\n");
    exit(0);
}

int is_variable_char(char c)
{
    if (isalnum(c)) {
        return 1;
    }
    if (c == '_') {
        return 1;
    }

    return 0;
}

char * parse_number(char *s)
{
    char tmp[32];
    int i = 0;

    while (isdigit(*s)) {
        tmp[i++] = *s;
        s++;
    }
    tmp[i] = '\0';
    printf("vari: %s\n", tmp);
    
    return s;
}

char * parse_variable(char *s)
{
    char tmp[32];
    int i = 0;

    while (isdigit(*s)) {
        tmp[i++] = *s;
        s++;
    }
    tmp[i] = '\0';
    printf("vari: %s\n", tmp);

    return s;
}

void parse(char *s)
{
  printf("parse: %s\n", s);

  while (*s) {
      if (isdigit(*s)) {
          s = parse_number(s);
          continue;
      } else if (is_variable_char(*s)) {
          s = parse_variable(s);
          continue;
      }
      s++;
  }
}
