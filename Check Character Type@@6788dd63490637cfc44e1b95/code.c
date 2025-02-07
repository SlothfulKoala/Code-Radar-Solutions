#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("Digit", ch);
    }
    else if (isalpha(ch)) {
        char lower_ch = tolower(ch);
        
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("Vowel", ch);
        } else {
            printf("Consonant", ch);
        }
    }
    else {
        printf("Special Character", ch);
    }
    
    return 0;
}