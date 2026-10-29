#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    printf("Vowels: ");

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]);
            vowels++;
        }
    }

    printf("\nConsonants: ");

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {

            if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                  str[i] == 'o' || str[i] == 'u' ||
                  str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
                  str[i] == 'O' || str[i] == 'U')) {
                printf("%c ", str[i]);
                consonants++;
            }
        }
    }

    printf("\nNumber of vowels = %d", vowels);
    printf("\nNumber of consonants = %d\n", consonants);

    return 0;
}