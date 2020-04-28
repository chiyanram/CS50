//
// Created by Ram on 11/04/20.
//
#include <stdio.h>

int main(void) {
    int n = 8;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        printf("  ");

        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        printf("\n");
    }
}

