#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @agrc: number of arguments
 * @agrv: array of arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *agrv[])
{
(void)agrv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
