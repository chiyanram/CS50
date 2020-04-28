#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string input, int length);

int count_words(string input, int length);

int count_sentence(string input, int length);

float avarage(int total, int count);

int main(void) {
    string input = get_string("Text: ");

    int length = strlen(input);
    int letterCount = count_letters(input, length);
    int wordCount = count_words(input, length);
    int sentenceCount = count_sentence(input, length);
    int L = avarage(wordCount, letterCount);
    int S = avarage(wordCount, sentenceCount);
    int index = round((0.0588 * L) - (0.296 * S) - 15.8);

    if (index < 1) {
        printf("Before Grade 1\n");
    } else if (index >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %i\n", index);
    }

}

int count_letters(string input, int length) {

    int count = 0;
    for (int i = 0; i < length; i++) {
        if (input[i] >= 'A' && input[i] <= 'z') {
            count++;
        }
    }

    return count;
}

int count_words(string input, int length) {
    int word = 1;
    for (int i = 0; i < length; i++) {
        if (input[i] == ' ') {
            word++;
        }
    }

    return word;
}

int count_sentence(string input, int length) {
    int sentence = 0;
    for (int i = 0; i < length; i++) {
        if (input[i] == '.' || input[i] == '?' || input[i] == '!') {
            sentence++;
        }
    }
    return sentence;
}

float avarage(int total, int count) {

    return ((float) count / (float) total) * 100;
}