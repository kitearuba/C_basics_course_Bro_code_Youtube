//
// Created by chris on 8-3-2024.
//
#include <stdio.h>

int main(){

    for (int i = 1; i <= 20; ++i) {

        if(i == 13){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}