#include <stdio.h>
#include <math.h>


float sr_arifm(int M, float resistance[]);

int data_select(int M, float resistance[]){
    float resistance_average = sr_arifm(M, resistance);

    int newM = 0;

    for(int i = 0; i < M; ++i){
        float tmp = fabs(resistance[i] - resistance_average)/resistance_average;
        if(tmp > 0.03){
            continue;
        }
        resistance[newM++] = resistance[i];
    }

    return newM;
}

float sr_arifm(int M, float resistance[]){
    float summ = 0;
    for(int i = 0; i < M; ++i){
        summ += resistance[i];
    }
    return summ/M;
}