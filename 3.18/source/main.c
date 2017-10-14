#include <stdio.h>
#include <stdlib.h>


int main(void)

{
	int b;
	b = 200;
	float a,c;
	
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &a);

	while (a != -1)
	{
		c = b + (a * 0.09);
		printf("Salary is :%.2f\n" , c);




		printf("Enter sales in dollar (-1 to end):");
		scanf_s("%f", &a);

		
	}


	system("pause");
	
}