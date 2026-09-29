#include <stdio.h>
#include "main.h"

int main()
{
    float resistance[100];
    int size_r = 0;
    size_r = preparation(resistance);
    if (size_r == 0)
    {
        printf("error: input size");
        return -1;
    }
    return 0;
}
