#include <stdio.h>
#include "main.h"

int main()
{
    float resistance[100];
    int m = 0;
    int k = 0;
    m = preparation(resistance);
    if (m == 0)
    {
        printf("error: input size");
        return -1;
    }
    k = data_select(m, resistance);
    if (k == 0)
    {
        printf("error: first_calc");
        return -1;
    }
    float resistance_final = result(k, resistance);
    return 0;
}
