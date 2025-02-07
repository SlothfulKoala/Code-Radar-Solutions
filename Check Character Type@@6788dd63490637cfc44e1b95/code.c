#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("Digit", ch);
    }
    // Checking if the character is an alphabet
    else if (isalpha(ch)) {
        // Converting to lowercase for uniformity
        char lower_ch = tolower(ch);
        
        // Checking for vowels
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("Vowel", ch);
        } else {
            printf("Consonant", ch);
        }
    }
    // If not a digit or alphabet, then it's a special character
    else {
        printf("Special Character", ch);
    }
    
    return 0;
}