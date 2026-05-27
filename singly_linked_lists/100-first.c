#include <stdio.h>

/**
 * first_func - prints the tortoise quote before main() runs
 */
void __attribute__((constructor)) first_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
