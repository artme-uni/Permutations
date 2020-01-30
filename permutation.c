#include "permutation.h"

void badinput(char *arr)
{

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] > '9' || arr[i] < '0')
        {
            printf("bad input\n");
            exit(0);
        }
        for (int k = 0; k < strlen(arr); k++)
        {
            if ((arr[k] == arr[i]) && (k != i))
            {
                printf("bad input\n");
                exit(0);

            }
        }
    }
}

void swap(char *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void permutation(char *arr, int N)
{

    int x = N - 1;
    while ((x > 0) && (arr[x - 1] >= arr[x]))
        x--;
    if (x == 0) exit(0);

    int y = N - 1;
    while (arr[y] <= arr[x - 1])
        y--;

    swap(arr, x - 1, y);
    y = N - 1;
    while (x++ < y--)
        swap(arr, x, y);
}