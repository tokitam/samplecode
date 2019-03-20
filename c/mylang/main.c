
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "mylang.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        usage();
    }

    parse(argv[1]);

    return 0;
}
