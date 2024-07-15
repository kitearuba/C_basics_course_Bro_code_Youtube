//
// Created by chris on 4-3-2024.
//
#include <stdio.h>
#include <ctype.h>

int main(){

       char unit;
       float temp;
       float conversion;

    printf("\nIs the temperature in (F) or (C): ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if(unit == 'C'){
        printf("What is the temperature in C: ");
        scanf("%f", &temp);
        conversion = (temp * 9/5)+ 32;
        printf("The temperature is %.1f F.", conversion);
    }
    else if(unit == 'F'){
        printf("What is the temperature in F: ");
        scanf("%f", &temp);
        conversion = (temp - 32)* 5/9;
        printf("The temperature is %.1f C", conversion);
    }
    else{
        printf("\nEnter a valid temperature!");
    }
    return 0;
}