/*27.2 WAP to show
ii. Vowel or Consonant using switch case*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert the character to uppercase for simplicity
    ch = toupper(ch);

    // Check if the character is a vowel or a consonant
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if (isalpha(ch)) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not a valid alphabet character.\n", ch);
            }
            break;
    }

    return 0;
}

