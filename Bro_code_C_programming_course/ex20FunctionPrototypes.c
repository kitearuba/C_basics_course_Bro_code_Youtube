//
// Created by chris on 4-3-2024.
//
#include <stdio.h>

void hello(char[], int); // function prototype

int main(){

    // Function Prototype
    // Function declaration, w/o body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing.

    // ADVANTAGES
    // 1. Easier toi navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files

    char name[] = "Titi";
    int age = 50;

    hello( name, age);

    return 0;
}

void hello(char n[], int a){

    printf("\nHello %s", n);
    printf("\nYou are %d years old", a);
}