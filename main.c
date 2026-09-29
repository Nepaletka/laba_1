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
    
    if (!check(k, resistance, resistance_final)) {
        printf("Something went wrong with calculations\n");
        return -1;
    }

    return 0;
}
