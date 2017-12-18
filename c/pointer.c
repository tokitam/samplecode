#include <stdio.h>

int main(int argc, char *argv[])
{
    char c[20];
    c[10] = 123;
    printf("%d\n", c[10]);
    printf("%d\n", *(c + 10));
    printf("%d\n", *(10 + c));
    printf("%d\n", 10[c]);
    return 0;
}
