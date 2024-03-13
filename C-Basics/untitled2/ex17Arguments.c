//
// Created by chris on 4-3-2024.
//
#include <stdio.h>
#include <stdbool.h>

void birthday(char x[],int y){
    printf("\nHappy Birthday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main(){

    char name[] = "Titi";
    int age = 50;

    birthday(name,age);

    return 0;
}