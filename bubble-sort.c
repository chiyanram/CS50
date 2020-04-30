//
// Created by Ram on 30/04/20.
//
#include <stdio.h>


int main(void) {
    int array[6] = {5, 2, 3, 7, 1, 4};
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int k = 0; k < 6; ++k) {
        printf("%i ", array[k]);
    }
}