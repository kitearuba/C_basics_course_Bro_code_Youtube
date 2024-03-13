//
// Created by christian on 1/03/24
//
#include <stdio.h>
#include <math.h>

int main() {

    double a;
    double b;
    double c;

    printf("Introduce value for side a: \n");
    scanf("%lf", &a);
    printf("Introduce value for side b: \n");
    scanf("%lf", &b);

    c = sqrt(pow(a, 2) + pow(b, 2)); // Corrected this line
    printf("\nThe hypotenuse is: %lf\n", c);

    return 0;
}