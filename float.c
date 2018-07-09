/*
Write a C program to calculate a bike’s average consumption from the given total distance
(integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double average = 0;
	int distance = 0; // in km
	float fuel = 0; // 2 decimal point

	printf("Input total distance in km: \n");
	scanf("%d", &distance);

	printf("Input total fuel spent in liters: \n");
	scanf("%f", &fuel);

	average = distance * fuel;

	printf("Average consumption (km/lt) %lf", average);

	return 0;
}
