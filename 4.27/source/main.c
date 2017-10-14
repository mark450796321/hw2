#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, j, k, a, b;

	for(i=1;i<501;i++)
	{
		for (j = 1; j < 500; j++)
		{
			for (k = 1; k < 500; k++)
			{
				a = j*j + k*k;
				b = i*i;
				if (a==b)
				{
					printf("side:%d side:%d ±×Ãä:%d \n", j, k,i);
				}

			}

		}

	}
	system("pause");

}