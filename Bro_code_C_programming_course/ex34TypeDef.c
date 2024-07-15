//
// Created by chris on 11-3-2024.
//
#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

int main(){

    //user user1 = "Titi";
    User user1 = {"Titi", "password123", 123456789};
    User user2 = {"Bolitas", "password321", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    printf("\n%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    return 0;
}