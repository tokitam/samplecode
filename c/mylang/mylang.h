
typedef enum enm {
  number = 1,
  string = 2,
} type;

typedef struct {
  int type;
  char name[32];
} Token;

void usage();

int is_variable_char(char c);
char * parse_number(char *s);
char * parse_variable(char *s);
void parse(char *s);

