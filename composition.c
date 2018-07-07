/* 01234567890:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ */
#include <stdio.h>
#include <string.h>

struct R {
	char n[6];
	int a;
};

struct S {
	double p;
	struct R q;
};

struct S f(const struct R* x) {
	struct S a;
	a.q = *x;
	a.p = 3.142;
	return a;
}

char g(struct R* y) {
	strcpy(y->n, "Wee");
	y->a = 3;
	return *y->n;
}

int main(void) {
	char c;
	struct S u;
	struct R x = { "Jello", 159 };
	u = f(&x);
	printf("%s,%.2lf%d\n", u.q.n, u.p, u.q.a);
	c = g(&x);
	printf("%s,%d.142,%cee\n", x.n, x.a, c);
	x.n[0] -= 3;
	x.n[1] = 'r';
	printf("%seeeeeeeeee\n", x.n);
	return 0;
}