//
// Created by Ram on 28/04/20.
//
//
// Created by Ram on 11/04/20.
//
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {

    float dollars;
    do {
        dollars = get_float("Enter the dollar amount for the remaining: ");
    } while (dollars <= 0);

    int coins = round(dollars * 100);
    int totalCoins = 0;

    while (coins >= 25) {
        totalCoins++;
        coins = coins - 25;
    }

    while (coins >= 10) {
        totalCoins++;
        coins = coins - 10;
    }

    while (coins >= 5) {
        totalCoins++;
        coins = coins - 5;
    }

    while (coins >= 1) {
        totalCoins++;
        coins = coins - 1;
    }

    printf("%d\n", totalCoins);
}

