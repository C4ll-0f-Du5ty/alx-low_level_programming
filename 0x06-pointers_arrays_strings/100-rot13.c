#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *rot13 - encodes the string
 * @ptr: the string to be encoded
 * Return: the encoded ptr
 */

char *rot13(char *ptr) {
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*ptr) {
		for (i = 0; i <= 52; i++) {
			if (*ptr == rot13[i]) {
				*ptr = ROT13[i];
				break;
			}
		}
		ptr++;
	}
	return ptr;
}
