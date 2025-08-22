#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#include "C:\Users\priva\OneDrive\Documents\Practicing C Language\#7 Reverse Integer\source\powerFunction.c"

int MAX = INT_MAX;
int MIN = INT_MIN;

bool turnedPositive = 0;

    int reverse(int x){

        printf("x = %d\n", x);
        if (x < 0){
            printf("x negative\n");
            x *= (-1);
            turnedPositive = 1;
        }else if(x <= MIN){
            return 0;
        }

        if(turnedPositive == 1) printf("turnedPositive = 1\n");
        else printf("turnedPositive = 0\n");

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

        for(int i = 0; i < xDigitsNumber; i++){
            printf("xStoring [%d] = %d\n", i, xStoring [i]);
        }

        unsigned long long xReversed = 0;
        int tempxDigitsNumber = (xDigitsNumber - 1);

        printf("Power = %llu\n", powerFunction(10, tempxDigitsNumber));
        printf("MAX = %llu\n", (unsigned long long)MAX);

        if ( (powerFunction(10, tempxDigitsNumber)) >  (unsigned long long)MAX) return 0;


        for(int i = 0; i < xDigitsNumber; i++){

            xReversed += (unsigned long long)xStoring [i] * powerFunction(10, tempxDigitsNumber);
            printf("xReversed = %llu", xReversed);

            if(xReversed > (unsigned long long)MAX){
                printf("Break\n");
                return 0;
                break;
            }

            if(tempxDigitsNumber != 0){
                tempxDigitsNumber--;
                printf("\ntempxDigitsNumber = %d\n", tempxDigitsNumber);
            }

        }

        //printf("Reversed x %lu\n", xReversed);

        if(turnedPositive == 1){
            printf("\nFinalReversed x (-) %llu\n", (xReversed * (-1)));
            turnedPositive = 0;
            return (int)(xReversed * (-1));
        }
        else{
            printf("\nFinal Reversed x (+) %llu\n", xReversed);
            return (int)xReversed;
        }
    }