#include <unistd.h>
/**
 * main - Entry point
 *
 * Discription: A C program that prints with put function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19";

	write(2, message, 59);
	return (1);
}
