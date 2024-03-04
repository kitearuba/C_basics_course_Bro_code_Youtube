//
// Created by christian on 29/02/24.
//
#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159265359;
    double r;
    double c;
    double z;

    printf("What is the radius of the circle?\n");
    scanf("%lf", &r);

    c = 2*PI*r;
    z = PI *pow(r,2);
    printf("The circumference of the circle is %lf\n", c);
    printf("Circle Area: %lf\n", z);

    return 0;
}