/*
Write a C program that accepts three integers and find the maximum of three. Go to the editor
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int first;
	int second;
	int third;
	int result;
	int max;

	printf("Input the first integer: ");
	scanf("%d", &first);
	printf("Input the second integer: ");
	scanf("%d", &second);
	printf("Input the third integer: ");
	scanf("%d", &third);

	result = (first + second + abs(first - second)) / 2;
	max = (result + third + abs(result - third)) / 2;
	printf("Maximum value of three integers: %d\n", max);

	return 0;
}
