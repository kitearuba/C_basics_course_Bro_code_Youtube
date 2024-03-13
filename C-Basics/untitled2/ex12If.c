//
// Created by chris on 4-3-2024.
//
#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nYou are now signed up!\n");
    }
    else if(age <= 0){
        printf("\nYou are not born yet");
    }
    else{
        printf("\nYou are to young to sign up");
    }

    return  0;
}