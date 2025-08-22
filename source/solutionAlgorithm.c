#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>
#include <limits.h>

int32_t MAX = INT32_MAX;
int32_t MIN = INT32_MIN;

    int reverse(int x){

        printf("Function Started...!\n");

        int carry = 1;
        int xDigitsNumber = 0;

        int xTemp = x;

        while ( carry != 0 ){
            carry = xTemp / 10;
            xTemp = carry;
            xDigitsNumber++;
        }

        printf("Number Of digits for this number = %d\n", xDigitsNumber);

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

        if( (xReversed > MAX) || (xReversed < MIN) ){
            return 0;
        }

        if(x < 0){
            printf("Reversed x %d\n", (xReversed * (-1)));
            return (xReversed * (-1));
        }
        else{
            printf("Reversed x %d\n", xReversed);
            return xReversed;
        }
    }