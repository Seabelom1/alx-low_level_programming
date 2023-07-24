#include "main.h"

/**
 * _puts -functions that prints a string
 * @str: strings to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[1] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
