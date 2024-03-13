//
// Created by chris on 4-3-2024.
//
#include <stdio.h>

int main(){

    char operator;
    float value1;
    float value2;
    float result;

    printf("\nIntroduce the operator (+), (-), (*), or (/): ");
    scanf("%c", &operator);

    printf("\nIntroduce the first value: ");
    scanf("%f", &value1);

    printf("\nIntroduce the second value: ");
    scanf("%f", &value2);

    switch (operator) {
        case '+':
            result = value1 + value2;
            printf("\n Result: %f", result);
            break;
        case '-':
            result = value1 - value2;
            printf("\n Result: %f", result);
            break;
        case '*':
            result = value1 * value2;
            printf("\n Result: %f", result);
            break;
        case '/':
            result = value1 / value2;
            printf("\n Result: %f", result);
            break;
        default:
            printf("%c is not a valid operator!", operator);
    }
    return  0;
}