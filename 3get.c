#include <stdio.h>
#include <math.h>
 
 
float calculate_deviation(const float arr[], const float resistance_final, const int K) {
    float deviation = 0;
 
    for (size_t i = 0; i < K; i++) {
        deviation += (arr[i] - resistance_final)*(arr[i] - resistance_final);
    }
 
    deviation = sqrt(deviation) / K;
 
    return deviation;
 }
 
float result(int K, float *resistance) {
    float resistance_final = 0, deviation = 0;
    for (size_t i = 0; i < K; i++) {
        resistance_final += resistance[i];
    }
    resistance_final /= K;
    deviation = calculate_deviation(resistance, resistance_final, K);
    printf("%f ± %f", resistance_final, deviation);
    return resistance_final;
 
}