//
// Created by chris on 4-3-2024.
//
#include <stdio.h>
int main(){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!");
            break;
        case 'D':
            printf("At least it is not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades!");

    }

    return  0;
}