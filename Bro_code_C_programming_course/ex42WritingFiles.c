//
// Created by chris on 12-3-2024.
//
#include <stdio.h>

int main(){

    FILE *pF = fopen("C:\\Users\\chris\\Desktop\\test.txt", "a");
    // w = write
    // a = append

    fprintf(pF, "\nSpongebob Squarepants");

    fclose(pF);

/*
    if(remove("test.txt") == 0){
        printf("That file was deleted successfully!");
    } else{
        printf("That file was NOT deleted!");
    }
 */
    return 0;
}