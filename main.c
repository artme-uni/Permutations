#include "permutation.h"

int main(int argc, char **argv)
{
    int N = atoi(argv[2]);

    badinput(argv[1]);

    while (N)
    {
        permutation(argv[1], strlen(argv[1]));
        printf("%s\n", argv[1]);
        N--;
    }
    return 0;
}