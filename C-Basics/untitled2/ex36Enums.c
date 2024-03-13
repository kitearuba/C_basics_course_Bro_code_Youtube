//
// Created by chris on 11-3-2024.
//
#include <stdio.h>

enum Day{Mon = 1,Tue = 2,Wed = 3,Thu = 4,Fri = 5,Sat = 6,Sun = 7};

int main(){

    enum Day today = Mon;

    //printf("%d", today);
    if(today == Sun || today == Sat){
        printf("\nIt's the weekend! =Party time!");
    } else{
        printf("\nI have to work today :(");
    }

    return 0;
}