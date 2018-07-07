// The Trees
// Danny Abesdris
//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void readln(FILE *, char *);
void extract(char *, char *, int);
void change(char *);

int main(void)
{
	char buf[51], temp[10], fname[11] = "data.txt";
	FILE *fp;
	int i, j = 0, line[5] = { 2,3,4,5,8 }, pos[5] = { 16,9,8,26,1 };

	fp = fopen(fname, "r"); // assume file opened successfully! 
	for (i = 0; i < 10; i++) {
		readln(fp, buf);
		if (j < 5 && i == line[j]) {
			extract(temp, buf, pos[j]);
			j++;
			if (i > 3 && i < 6) {
				change(temp);
			}
		}
	}
	fclose(fp);
	return 0;
}

void readln(FILE *fp, char *buf)
{
	fgets(buf, 51, fp); // reads an entire line from the file
}                            // and stores it in array 'buf'

void extract(char *temp, char *buf, int x)
{
	int i, j = 0;
	for (i = x; buf[i] != ' '; i++) {
		temp[j] = buf[i];
		printf("%c", temp[j]);
		j++;
	}
	temp[j] = '\0';
	printf("\n");
}

void change(char *s)
{
	s[0] -= ' '; // recall what -= ' ' does to a character
	printf("%s\n", s);
}
/*
data.txt: fixed-length record file (total bytes: 1550)
column 1__                                      column 50__
|                                    column 49__ |
|                                               ||
01234567890123456789012345678901234567890123456789
+-------------------------------------------------+
line 01  |"THE TREES"                                     ~|
line 02  |                                                ~|
line 03  |There is unrest in the forest,                  ~|
line 04  |There is trouble with the trees,                ~|
line 05  |For the maple want more sunlight                ~|
line 06  |And the oaks ignore their leafs                 ~|
line 07  |                                                ~|
line 08  |The trouble with the maples,                    ~|
line 09  |(are they're quite convinced the're right?)     ~|
line 10  |They say the oaks are just too lofty            ~|
line 11  |And they grab up all the light.                 ~|
line 12  |But the oaks can't help their feelings          ~|
line 13  |If they like the way they're made.              ~|
line 14  |And they wonder why the maples                  ~|
line 15  |Can't be happy in their shade.                  ~|
line 16  |                                                ~|
line 17  |There is trouble in the forest,                 ~|
line 18  |And the creatures all have fled,                ~|
line 19  |As the maples scream `Oppression`               ~|
line 20  |And the oaks, just shake their heads            ~|
line 21  |                                                ~|
line 22  |So the maples formed a union                    ~|
line 23  |And demanded equal rights.                      ~|
line 24  |"The oaks are just too greedy;                  ~|
line 25  |We will make them give us light"                ~|
line 26  |Now there's no more oak oppression,             ~|
line 27  |For they passed a noble law,                    ~|
line 28  |And the trees are all kept equal                ~|
line 29  |By hatchet, axe, and saw.                       ~|
line 30  |                                                ~|
line 31  |Lyrics by: Neil Peart                           ~|
EOF      +-------------------------------------------------+
*/