//
// Created by chris on 11-3-2024.
//
#include <stdio.h>
#include <string.h>

struct Student{
    char name[12];
    float gpa;
};

int main(){

    struct Student student1 = {"Roger", 4.0};
    struct Student student2 = {"Katia", 3.5};
    struct Student student3 = {"Mario", 2.0};
    struct Student student4 = {"Bingo", 2.1};

    struct Student students[] = {student1,student2,student3,student4};

    for (int i = 0; i < sizeof(students)/ sizeof(students[0]); ++i) {
        printf("%s   %.1f\n", students[i].name, students[i].gpa);
    }
    return 0;
}