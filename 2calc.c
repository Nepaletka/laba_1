#include "2calc.h"
#include <stdio.h>
#include <math.h>

#define NOT_AN_ELEMENT -456.9

int data_select(int M, float resistance[]){
    float resistance_average = sr_arifm(M, resistance);
    for(int i = 0; i < M; ++i){
        float tmp = fabs(resistance[i] - resistance_average)/resistance_average;
        if(tmp > 0.03){
            resistance[i] = NOT_AN_ELEMENT;
        }
    }

    int preNewM = 0;

    for(int i = 0; i < M; ++i){
        if(resistance[i] == NOT_AN_ELEMENT){
            for(int j = i+1; j < M; ++j){
                float num = resistance[j-1];
                resistance[j-1] = resistance[j];
                resistance[j] = num;
            }
            ++preNewM;
        }
    }
    return M - preNewM;
}

float sr_arifm(int M, float resistance[]){
    float summ = 0;
    for(int i = 0; i < M; ++i){
        summ += resistance[i];
    }
    return summ/M;
}