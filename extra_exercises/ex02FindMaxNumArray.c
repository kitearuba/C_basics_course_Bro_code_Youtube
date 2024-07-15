//
// Created by chris on 17-3-2024.
//
#include <stdio.h>

int maxNum(int array[], int size);

int main(){

    int myarray1[] = {5,8,10,11,4,3,8,6,7};
    int myarray2[] = {2,5,9,3,4,3,0};

    int size1 = sizeof(myarray1)/sizeof(myarray1[0]);
    int size2 = sizeof(myarray2)/ sizeof(myarray2[0]);

    int max1 = maxNum(myarray1,size1);
    int max2 = maxNum(myarray2,size2);

    return 0;
}

int maxNum(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; ++i)
    {
        if(max < array[i])
            max = array[i];
    }
    printf("The maximum number in the array is:  %d\n", max);
    return max;
}