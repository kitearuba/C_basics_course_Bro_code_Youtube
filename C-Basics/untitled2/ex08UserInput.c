//
// Created by christian on 29/02/24.
//
#include <stdio.h>
#include <string.h>
int main(){
    char name[25];  // bytes
    int age;
    printf("What is your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin);  // includes skip line
    name[strlen(name)-1]= '\0';        // removes skip line

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old\n", age);
    return 0;
}