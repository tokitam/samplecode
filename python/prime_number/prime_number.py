#!/usr/bin/python

import sys

def check_prime_number(number):
    max = number / 2
    i = 2

    while (i <= max):
        if (number % i) == 0:
            return 0
        i += 1

    return 1

def usage():
    print("usage: prime_number [number]")
    sys.exit()

def main():
    min = 2
    max = 100

    if len(sys.argv) < 2:
        usage()
    elif len(sys.argv) == 2:
        min = 2
        max = int(sys.argv[1])
    elif len(sys.argv) == 3:
        min = int(sys.argv[1])
        max = int(sys.argv[2])
    else:
        usage()

    j = min
    while (j <= max):
        if (check_prime_number(j)):
            print(str(j))
        j += 1

main()
