#include <stdio.h>

long long powerFunction(int base, int exp){

    long long result = 1;

    for(int i = 0; i < exp; i++){
        result *= (long long)base;
    }

    return result;
}