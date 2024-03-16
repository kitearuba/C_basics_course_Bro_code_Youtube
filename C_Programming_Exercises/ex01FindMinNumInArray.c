//
// Created by chris on 16-3-2024.
//
#include <stdio.h>

int findMin(int array[], int size);

int main(){

    int myarray1[] = {5,9,10,11,4,3,8,6,7};
    int myarray2[] = {2,5,9,3,4,3,0};
    int size1 = sizeof(myarray1)/sizeof(myarray1[0]);
    int size2 = sizeof(myarray2)/sizeof(myarray2[0]);

    int min1 = findMin(myarray1, size1);
    int min2 = findMin(myarray2,size2);

    printf("\nMininum number of the array is: %d", min1);
    printf("\nMininum number of the array is: %d\n", min2);

    return  0;
}

int findMin(int array[], int size){
  int min;

  for (int i = 1; i < size; ++i) {
      if(array[i] < min){
          min = array[i];
      }
  }
  return min;
}

//My solution before checking optimized version

/*
int arrayOrder(int array[],int size);

int main(){

    int myarray[] = {5,9,10,11,4,3,8,6,7};
    int size = sizeof(myarray)/ sizeof(myarray[0]);
    int minNum = arrayOrder(myarray, size);


    printf("\nThe min is:  %d", minNum);

    return  0;
}

int arrayOrder(int array[],int size){
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size  - 1; ++j) {
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]= temp;
            }
        }
    }
    return array[0];
}
*/