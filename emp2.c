/*
Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. 
Print the employee's ID and salary (with two decimal places) of a particular month. Go to the editor
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char id[11];
	int hours;
	int salary = 0;
	double total = 0;

	

	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", &id);

	printf("Input the working hrs: ");
	scanf("%d", &hours);

	printf("Salary amount/hr: ");
	scanf("%d", &salary);

	total = salary * hours;

	printf("Employees ID = %s\n", id);
	printf("Salary = U$ %.2lf", total);

	return 0;
}

/*
Input the Employees ID(Max. 10 chars): 0342

Input the working hrs: 8

Salary amount/hr: 15000

Employees ID = 0342
Salary = U$ 120000.00 */