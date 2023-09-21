#include "main.h"
#include <stdio.h>
#include <ctype.h>  // for toupper

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */

char *cap_string(char *s) {
    int capitalize = 1;  // Start with the first character capitalized

    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace(s[i]) || s[i] == ',' || s[i] == ';' || s[i] == '.' ||
            s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
            s[i] == ')' || s[i] == '{' || s[i] == '}') {
            capitalize = 1;  // Set the flag to capitalize the next word
        } else if (capitalize && islower((unsigned char)s[i])) {
            s[i] = toupper((unsigned char)s[i]);  // Capitalize the current character
            capitalize = 0;  // Reset the flag
        } else {
            capitalize = 0;  // Reset the flag for non-alphanumeric characters
        }
    }

    return s;
}
