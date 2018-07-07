// Letter Arithmetic
//

#include <stdio.h>
void d(char s[], int a[], int n);
void print(const char[]);

int main(void)
{
	char s[] = "mgjalr";
	int i, j;
	int k[] = { 3, 1, 5, 1 };
	int m[] = { -3, -3, 5, 16, -6, -16 };

	print(s);
	d(s, k, 4);
	print(s);
	d(s, m, 6);
	print(s);
	return 0;
}

void d(char s[], int a[], int n)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++) {
		s[i] += a[j];
		j++;
		if (j == n)
			j = 0;
	}
}

void print(const char s[])
{
	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
}