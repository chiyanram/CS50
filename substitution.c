#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argC, string argv[]) {

    if (argC != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string input = argv[1];
    int length = strlen(input);
    if (length != 26) {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    int checkArray[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < length; i++) {
        if (!isalpha(input[i])) {
            printf("Usage: ./substitution key\n");
            return 1;
        }
        input[i] = toupper(input[i]);
        int index = input[i] - 'A';
        if (checkArray[index] >= 1) {
            printf("Usage: ./substitution key\n");
            return 1;
        } else {
            checkArray[index] = checkArray[index] + 1;
        }
    }


    string plaintest = get_string("plaintext: ");
    for (int i = 0, n = strlen(plaintest); i < n; i++) {
        if (isalpha(plaintest[i])) {
            bool isLowerCase = islower(plaintest[i]);
            int ascii = 'A';
            if (isLowerCase) {
                ascii = 'a';
            }
            int p = plaintest[i] - ascii;
            char ch = input[p];

            plaintest[i] = ch;
            if (isLowerCase) {
                plaintest[i] = tolower(ch);
            }
        }
    }

    printf("ciphertext: %s\n", plaintest);
    return 0;
}