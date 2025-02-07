#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Checking if the character is a digit
    if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    // Checking if the character is an alphabet
    else if (isalpha(ch)) {
        // Converting to lowercase for uniformity
        char lower_ch = tolower(ch);
        
        // Checking for vowels
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    }
    // If not a digit or alphabet, then it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }
    
    return 0;
}