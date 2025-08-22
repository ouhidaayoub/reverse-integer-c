#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>
#include <limits.h>

int32_t MAX = INT32_MAX;
int32_t MIN = INT32_MIN;

    int reverse(int x){

        int carry = 1;
        int xDigitsNumber = 0;

        while ( carry != 0 ){
            carry = x / 10;
            xDigitsNumber++;
        }

        int xStoring [xDigitsNumber];
        int xStoringIndex = 0;

        for( int i = 1; i <= xDigitsNumber; i++ ){
            xStoring [xStoringIndex] = x % 10;
            xStoringIndex++;
            x /= 10;
        }

        int xReversed = 0;
        int tempxDigitsNumber = (xDigitsNumber - 1);

        for(int i = 0; i < xDigitsNumber; i++){

            xReversed += xStoring [i] * pow(10, tempxDigitsNumber);
            if(tempxDigitsNumber != 0){
                tempxDigitsNumber--;
            }

        }

        printf("Reversed x %d\n", xReversed);

        if( (xReversed > MAX) || (xReversed > MIN) ){
            return 0;
        }

        return xReversed;

    }