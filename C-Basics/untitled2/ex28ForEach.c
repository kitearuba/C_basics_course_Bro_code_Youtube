//
// Created by chris on 8-3-2024.
//
#include <stdio.h>

int main(){

    double prices[] = {5.0,10.0,15.0,25.0,20.0, 30.0,31.0};

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); ++i) {
        printf("%.2lf\n",prices[i]);
    }
    return 0;
}