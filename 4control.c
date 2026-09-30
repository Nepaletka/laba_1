#include <stdio.h>
#include "main.h"

int check (int K, float resistance[], float resistance_final) {
    float summ = 0;
    for (int i = 0; i < K; i++) {
        summ += resistance[i] - resistance_final;
    }
    float linear_deviation = summ / K;
    printf("%f\n", linear_deviation);

    if ((-0.10 < linear_deviation) && (linear_deviation < 0.10)) {
        return 1;
    }
    return 0;
}
