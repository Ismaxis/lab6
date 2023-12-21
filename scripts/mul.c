#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        printf("wrong argument count");
        return -1;
    }

    FILE* f_read = fopen(argv[1], "r");
    FILE* f_append = fopen(argv[1], "a");
    
    int n;
    fscanf(f_read, "%d", &n);
    printf("%d\n", n);

    for (size_t i = 1; i <= n; i++)
    {
        int v=55;
        fscanf(f_read, "%d", &v);
        v *= 2;
        fprintf(f_append, "%d\n", v);
    }

    fclose(f_append);
    fclose(f_read);
}

