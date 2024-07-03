#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101]; 
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; 

    int count = 0;
    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    printf("Number of vowel characters: %d\n", count);
    return 0;
}
