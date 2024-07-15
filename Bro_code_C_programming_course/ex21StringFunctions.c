//
// Created by chris on 4-3-2024.
//
#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Titi";
    char string2[] = "fiti";

    // strlwr(string1);                                 // lower case
    // strupr(string1);                                 // upper case
    // strcat(string1, string2);                        // appends
    // strncat(string1, string2,1);                     // appends number of characters
    // strcpy(string1, string2);                        // copy value of 2nd value to the first
    // strncpy(string1,string2,4);                      // copy number of characters from 2nd value to first

    // strset(string1, '?');                            // sets all characters in a string to a given value
    // strnset(string1, 'x', 2);                        // sets first number of characters a given character
    // strrev(string1);                                 // reverses order

    // int result = strlen(string1);                    // returns string length as an int
    // int result = strcmp(string1, string2);           // compares if characters are the same. O = same
    // int result = strncmp(string1, string2, 4);       // Compares number of characters from left ot right
    // int result = strcmpi(string1, string2);          //compares string and ignore case
    int result = strnicmp(string1, string2, 1);

    //printf("\n%s", string1);
    // printf(" %s\n", string2);


    //printf("%d", result);

    if (result == 0){
        printf("The strings are the same");
    } else{
        printf("Characters are not the same.");
    }

    return 0;
}