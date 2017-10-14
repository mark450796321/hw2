#include <stdio.h>
#include <stdlib.h>


int main(void)

{
	
	float a,b,c;

	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%f",&a);

	while (a != -1)
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &b);
		
		
		if (a > 40)
		{
			c = 400 + (a - 40) * (b*1.5);
			printf("Salary is $%.2f\n\n", c);
		}
		else
		{
			c = a * b;
			printf("Salary is $%.2f\n\n", c);
		}


		   printf("Enter # of hours worked (-1 to end):");
		   scanf_s("%f",&a);
		

	}

	system("pause");


}