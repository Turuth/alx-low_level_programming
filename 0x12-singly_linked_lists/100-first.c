#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - print'sa sentence before the main
 * function is executes
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
