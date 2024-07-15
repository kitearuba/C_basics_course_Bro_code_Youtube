//
// Created by chris on 12-3-2024.
//
#include <stdio.h>

int main(){

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&c);

    return 0;
}