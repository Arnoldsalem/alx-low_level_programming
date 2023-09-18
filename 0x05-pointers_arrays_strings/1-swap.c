#include "main.h"
/**
  * swap_int - swaps the values of two integers.
  * @a: integer with first value
  * @b: second integer
  * Return: is zero
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
