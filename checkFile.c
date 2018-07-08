// Check File
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int checkFile(FILE *);

int main(void)
{
	int errors;
	FILE* fp;

	fp = fopen("code", "r");
	errors = checkFile(fp);
	printf("Number of errors : %d\n", errors);
	fclose(fp);

	return 0;
}

int checkFile(FILE *fp)
{
	int r, e, c, sum, x;

	e = 0;
	r = 1;
	sum = 0;
	do {
		c = fgetc(fp);
		if ((char)c == '\n') {
			x = sum % 256;
			if (x == 0)
				printf("%02d is ok\n", r);
			else {
				printf("%02d is corrupted (%d)\n", r, x);
				e++;
			}
			sum = 0;
			r++;
		}
		else if (c != EOF)
			sum += (int)c;   // use ASCII table 
	} while (c != EOF);

	return e;
}

/*
The contents of file code are

ABC:
mn%
wDB
{9L
*/