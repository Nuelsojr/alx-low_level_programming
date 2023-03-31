#include <stdio.h>

void nuel(void) __attribute__ ((constructor));

/**
 * nuel - prints a sentence before the main
 * function is executed
 */
void nuel(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
