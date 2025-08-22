#include <stdio.h>
#include "C:\Users\priva\OneDrive\Documents\Practicing C Language\#7 Reverse Integer\source\solutionAlgorithm.c"

int main(){

    int result = reverse(123);
    printf("***%d****\n", result);
    printf("*********************************************************\n");

    result = reverse(-123);
    printf("***%d****\n", result);
    printf("*********************************************************\n");

    result = reverse(120);
    printf("***%d****\n", result);
    printf("*********************************************************\n");

    result = reverse(1534236469);
    printf("***%d****\n", result);
    printf("*********************************************************\n");

    result = reverse(-2147483648);
    printf("***%d****\n", result);
    printf("*********************************************************\n");

    return 0;

}