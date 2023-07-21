#include "main.h"

/**
 * _isupper-checks for uppercase charaters
 * @c: function parameter
 * Return: 1 on success and 0 on faliure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
