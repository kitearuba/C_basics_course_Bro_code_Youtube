//
// Created by chris on 11-3-2024.
//

#include <stdio.h>

void arrayOrder(int array[], int size){
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
}
void arrayPrint(int array[], int size){
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
}

int main(){

    int array[] = {9, 1, 8, 2, 7, 6, 4, 5, 3};
    int size = sizeof(array)/ sizeof(array[0]);

    arrayOrder(array, size);
    arrayPrint(array,size);

    //my version before looking at optimized
    /**
    printf("\n   Before Edit:\n");
    for (int i = 0; i < size; ++i) {

        printf("%d", array[i]);
    }

    for (int i = 0; i < size; ++i) {

        for (int j = 0; j < size; ++j) {

            int x = i;

            if( array[x] < array [j]){
                int temporal = array[x];
                array[x] = array[j];
                array[j]= temporal;
                x = j;
            }
        }
    }

    printf("\n   After Edit:\n");
    for (int i = 0; i < size; ++i) {

        printf("%d", array[i]);
    }
    **/

    return 0;
}
