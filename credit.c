#include <stdio.h>
#include <cs50.h>

int main(void) {
    long number = get_long("Number: ");;
    int counter = 0;
    long sumOfOdd = 0;
    long sumOfEven = 0;
    long first = 0;
    long second = 0;
    while (number > 0) {
        second = first;
        first = number % 10;
        if (counter % 2 == 0) { // Even places digits
            sumOfEven += first;
        } else {
            long mul = 2 * first;
            sumOfOdd = sumOfOdd + mul / 10 + mul % 10;
        }
        number = number / 10;
        counter++;
    }

    bool isValid = (sumOfEven + sumOfOdd) % 10 == 0;
    long firstTwoDigits = (first * 10) + second;
    if (isValid && first == 4 && counter >= 13 && counter <= 16) {
        printf("VISA\n");
    } else if (isValid && (firstTwoDigits == 34 || firstTwoDigits == 37)) {
        printf("AMEX\n");
    } else if (isValid && (firstTwoDigits == 51 || firstTwoDigits == 52 || firstTwoDigits == 53 ||
                           firstTwoDigits == 54 || firstTwoDigits == 55)) {
        printf("MASTERCARD\n");

    } else {
        printf("INVALID\n");
    }
}