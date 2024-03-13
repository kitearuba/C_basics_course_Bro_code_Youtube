//
// Created by chris on 10-3-2024.
//
#include <stdio.h>
#include <string.h>


int main(){

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("\nX: %c", x);
    printf("\nY: %c ", temp);


    char a[] = {"water"};
    char b[] = {"lemonade"};
    char tempA[15];

    strcpy(tempA,a);
    strcpy(a,b );
    strcpy(b,tempA );

    printf("\nA: %s\n", a);
    printf("B: %s\n", b);
    return 0;
}
