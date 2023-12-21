#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        printf("wrong argument count");
        return -1;
    }

    long long N = atoll(argv[1]);
    long long R = 0;
    for (long long i = 0; i < N; ++i) {
        R += i;
    }

    printf("%Ld", R);
}

