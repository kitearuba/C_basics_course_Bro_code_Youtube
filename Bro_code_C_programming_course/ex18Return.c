//
// Created by chris on 4-3-2024.
//
#include <stdio.h>
#include <math.h>

double square(double x){
    return pow(x, 2);
}

int main(){

    double a = square(4);
    printf("%lf", a);

    return  0;
}