//
// Created by chris on 12-3-2024.
//
#include <stdio.h>

void printAge(int *ae){
    printf("You are %d years old.", *ae);
}

int main(){

    int age = 21;
    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAge);  //de-referencing

    printAge(pAge);
    return 0;
}