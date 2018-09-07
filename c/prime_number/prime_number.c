
#include <stdio.h>
#include <stdlib.h>

void usage()
{
    printf("usage: prime_number [number]\n\n");
}

int check_prime_number(int number)
{
    int i, max = number / 2;

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
    int i, min, max;

    if (argc < 2) {
        usage();
        return 0;
    } else if (argc == 2) {
        min = 2;
        max = atoi(argv[1]);
    } else {
        min = atoi(argv[1]);
        max = atoi(argv[2]);
    }


    for (i=min; i <= max; i++) {
        if (check_prime_number(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
