#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a;
	float b,c,d,e,f ;
	printf("Enter account number (-1 to end):");
	scanf_s("%d", &a);
	while (a != -1)
	{
		
		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credits limit:");
		scanf_s("%f", &e);

		f = b + d;

		printf("Accout:%.2f\n", d);
		printf("Credit limit:%.2f\n", e);
		printf("Balance:%.2f\n", f);
		if (f > e)
			printf("Credit Limit Exceeded.\n\n");

		
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &a);
	} 
	system("pause");

}