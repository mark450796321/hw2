#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char s[2] = "*";
	char a[2] = " ";

	int i, j,k;

	for (i = 1; i < 10; i += 2)
	{

		for (k = 9; k > i; k -= 2)
		{
			printf("%s", a);
		}
		for (j = 0; j <i; j++)
		{
			printf("%s", s);
		}
		printf("\n");
	}

	for (i = 7; i >0 ;i -= 2)
	{
		for (k = 9; k > i; k -= 2)
		{
			printf("%s", a);
		}

		for (j = 0; j <i; j++)
		{
			printf("%s", s);
		}
		printf("\n");
	}

	system("pause");

}