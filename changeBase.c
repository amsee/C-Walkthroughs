// Change Base
//
#include <stdio.h>
#define BASE  2
#define VALUE 13
#define SHIFT 2



int main(void)
{
	int c, i;

	c = changeBase(VALUE, BASE, 10);
	printf("%03d in base %d is %d\n", VALUE, BASE, c);

	for (i = 0; i < SHIFT; i++)
		c = c * 10;

	printf("%03d * %d^%d in base %d is %06d\n", VALUE, BASE,
		SHIFT, BASE, c);

	c = changeBase(c, 10, BASE);
	printf("%03d * %d^%d is %d\n", VALUE, BASE, SHIFT, c);

	return 0;
}

int changeBase(int in, int oldBase, int newBase)
{
	int digit, out, factor;

	out = 0;
	factor = 1;
	while (in != 0) {
		digit = in % oldBase;
		out = factor * digit + out;
		factor = newBase * factor;
		printf("%d %6d %d\n", digit, in, out);
		in = in / oldBase;
	}
	return out;
}
