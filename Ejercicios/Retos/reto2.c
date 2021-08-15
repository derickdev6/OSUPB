#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int getMean(int32_t arr[], int size);

int main(int argc, char *argv[])
{
    int32_t arr[4] = {1, 3, 5, 7};
    int mean = getMean(arr, sizeof(arr) / sizeof(arr[0]));

    printf("mean = %d\n", mean);
}

int getMean(int32_t arr[], int size)
{
    printf("size = %d\n", sizeof(arr));
    int mean = 0;

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        mean += arr[i];
    }
    mean /= size;
    return mean;
}