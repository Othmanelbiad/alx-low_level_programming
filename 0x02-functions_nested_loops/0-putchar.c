#include "main.h"
/**
*main - Entry point
*Descripttion: 'prints _putchar to stdout'
*return: Always 0 (Success)
**/

int main(void)
{
	char str[] = "_putchar";
	int ch;
	for (ch = 0; ch < 8; ch++)
		_putchar(str[str]);
	_putchar('\n');

	return (0);
}
