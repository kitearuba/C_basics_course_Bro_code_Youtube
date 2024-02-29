//
// Created by christian on 29/02/24.
//

#include <stdio.h>

int main(){

    // format specifiers % = defines and formats a type of data to be displayed
    // %c = char
    // %s = string (char array)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    //  %1 = minimal filed width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%8.2f", item1);
    printf("\nItem 2: $%8.2f", item2);
    printf("\nItem 3: $%8.2f", item3);

    return 0;
}