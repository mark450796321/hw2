#include <stdio.h>
#include <stdlib.h>


int main(void)

{
	float a, b, c, d;
	printf("Enter loan principal (-1 to end):");
	scanf_s("%f", &a);

	while (a != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days:");
		scanf_s("%f", &c);
		d = a * b * c / 365;

		printf("The interest charge is $%.2f\n\n", d);

		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &a);

 
	}


	system("pause");



}