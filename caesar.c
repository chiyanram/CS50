#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argC, string argv[]) {

    if (argC != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string input = argv[1];
    int length = strlen(input);

    for(int i = 0 ; i < length; i++ )
    {
        if (!isdigit(input[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }


    int cipher = atoi(input);
    string plaintest = get_string("plaintext: ");
    for (int i = 0, n = strlen(plaintest); i < n; i++) {
        if(isalpha(plaintest[i])){
            int ascii = 'a';
            if(isupper(plaintest[i])){
                ascii = 'A';
            }
            int p = plaintest[i] - ascii;
            int position = (p + cipher) % 26 ;
            plaintest[i] = position + ascii;
        }

    }
    printf("ciphertext: %s\n", plaintest);

    return 0;
}