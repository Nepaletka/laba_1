#include "main.h"

int check (int K, float resistance[], float resistance_final) {
    float summ = 0;
    for (int i = 0; i < K; i++) {
        summ += resistance[i] - resistance_final;
    }
    float result = summ / K;

    if ((-0.10 < result) && (result < 0.10)) {
        return 1;
    }
    return 0;
}
