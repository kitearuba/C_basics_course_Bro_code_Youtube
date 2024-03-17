//
// Created by chris on 17-3-2024.
//
#include <stdio.h>

int main(){

    int myarray1[] = {5,2,7,2,5,7,2,7,1,7,8,4};
    int size1 = sizeof(myarray1)/ sizeof(myarray1[0]);
    int num = myarray1[0];
    int repeat;

    for (int i = 0; i < size1; ++i) {
        repeat = 0;
        for (int j = 1; j < size1; ++j) {
            if(myarray1[i] == myarray1[j]){
                printf("\n%d", size1);
                printf("\n%d", num);
                repeat++;
                printf("\n%d = %d\n",num,repeat);
            }

        }
        printf("\nnumero: %d\ncantidad: %d", num,repeat);
    }
    return 0;
}