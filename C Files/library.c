#include <stdio.h>
#include "stdbool.h"

int main() {
    printf("Welcome to Cherry Servers\n");

    int x;          //declaration
    x = 123;        //initialization
    int y = 321;    // both

    int age = 21;   //integer
    float gpa = 2.05; //floating point number
    char grade = 'C'; //single character
    char name[] = "Bro";  //Array of Characters

    printf("Hello %s\n", name);
    printf("You are %d age years old\n",age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}