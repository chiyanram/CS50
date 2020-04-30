//
// Created by Ram on 30/04/20.
//

#include <stdio.h>

int main(void) {
    int array[6] = {5, 2, 3, 7, 1, 4};
    for (int i = 0; i < 5; ++i) {
        int smallIndex = i;
        for (int j = i + 1; j < 6; ++j) {
            if (array[j] < array[smallIndex]) {
                smallIndex = j;
            }
        }

        int temp = array[i];
        array[i] = array[smallIndex];
        array[smallIndex] = temp;
    }

    for (int k = 0; k < 6; ++k) {
        printf("%i ", array[k]);
    }
}

