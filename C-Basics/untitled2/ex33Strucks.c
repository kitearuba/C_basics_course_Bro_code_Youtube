//
// Created by chris on 11-3-2024.
//
#include <stdio.h>
#include <string.h>

struct Player{
    char name[12];
    int score;
};

int main(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Titi");  // (.) dot is member access operator.
    player1.score = 4;

    strcpy(player2.name, "Bolitas");
    player2.score = 5;

    printf("%s\n",player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}