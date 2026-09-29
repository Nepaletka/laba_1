#include <stdio.h>

int preparation(float resistance[])
{
    float voltage[100];
    float current[100];
    float i_v = 0;
    float i_c = 0;
    int n = 0;
    while (scanf("%f %f\n", &i_v, &i_c) != EOF)
    {
        if (n == 100)
        break;
        voltage[n] = i_v;
        current[n] = i_c;
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        resistance[i] = voltage[i] / current[i];
    }
    return n;
}
