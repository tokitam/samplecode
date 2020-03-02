
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void usage()
{
    printf("usage: prime_number [number]\n\n");
}

long long check_prime_number(long number)
{
    long i, max = number / 2;

    for (i=2; i <= max; i++) {
        if (number % i == 0) {
            // no prime number
            return 0;
        }

    }

    // prime number
    return 1;
}

int main(int argc, char *argv[])
{
    long long i, min, max;

    if (argc < 2) {
        usage();
        return 0;
    } else if (argc == 2) {
        min = 2;
        max = atoll(argv[1]);
    } else {
        min = atoll(argv[1]);
        max = atoll(argv[2]);
    }

    min = (min < 2) ? 2 : min;

    for (i=min; i <= max; i++) {
        if (check_prime_number(i)) {
            printf("%lld\n", i);
        }
    }

    return 0;
}

