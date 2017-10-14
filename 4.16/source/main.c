#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i, j, k;
	char s[2] = "*";
	char a[2] = " ";
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for ( j = 0; j < i+1; j++)
		{
			printf("%s", s);
		}
		printf("\n");
	}

	printf("(B)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
		{
			printf("%s", s);
		}
		printf("\n");
	}

    printf("(C)\n");
	

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < i; k++)
		{
		printf("%s", a);
		}
			for (j = 10; j > i; j--)
			 {
			   printf("%s", s);
			 }
			
			printf("\n");
		}

	printf("(D)\n");

	for (i = 0; i < 10; i++)
	{
		for (k = 9; k > i; k--)
		{
			printf("%s", a);
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("%s", s);
		}

		printf("\n");
	}



	system("pause");
}