#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	char sign = '+';
	char sign2 = ' ';
	
	int a,b,i, j;

	printf("請輸入你的長:");
	scanf_s("%d", &a);
	printf("請輸入你的寬:");
	scanf_s("%d", &b);

	for (i = 0; i < a; i++)
	{
		for (j = 0; j <=b; j++)
		{
			if((i==0) || (i == (a-1)) || (j == 0) || (j == b))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	system("pause");




}