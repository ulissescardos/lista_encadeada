#include "./randint.h"

#include <stdio.h>
#include <sodium.h>


long int randint(int n)
{
    char str[64];
    uint32_t i;

    if(sodium_init() < 0)
    {
        puts("panic! the library couldn't be initialized, it is not safe to use");
        exit(EXIT_FAILURE);
    }

    randombytes_buf(str, 64);

    i = randombytes_uniform(n);

    return i;
}

