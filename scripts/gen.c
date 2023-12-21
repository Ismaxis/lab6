#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc != 3) {
        printf("wrong argument count");
        return -1;
    }

    FILE* f = fopen(argv[1], "w+");
    int n = atoi(argv[2]);

    fprintf(f, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", i);
    }

    fclose(f);
}

