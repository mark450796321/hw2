#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a;
	float  b, c, d, e, f;

	printf("�~��N�X 1�N��g�z�H�� 2�N����~�u 3�N������ 4�N��s�u\n");
	printf("�C�p�ɤu��:200\n");
	
	printf("��J�z���~��N�X:");
	scanf_s("%d", &a);
	
	switch (a)
	{
	case 1:
		printf("�C�g�T�w�~��:88888\n");
		break;
	case 2:
		printf("��J�A�o�g���u�@�ɼ�:");
		scanf_s("%f", &b);
		if (b >= 40)
		{
			c = (b - 40)*(200 * 1.5) + 40 * 200;
			printf("�o�g�~���O%.2f\n", c);
		}
		else
		{
			c = b * 200;
		}

		break;
	case  3:
		printf("��J�A�o�g���P����B:");
		scanf_s("%f",&d);

		e = d*0.057 + 250;

		printf("�o�g�~���O%.2f\n", e);

		break;
	case  4:
		printf("��J�A�o�g�Ͳ������:");
		scanf_s("%f",&f);
		
		break;
		
	default:
		printf("��J���~��N�X���s�b\n");
		break;
	}
	

	system("pause");
	return 0;
}
