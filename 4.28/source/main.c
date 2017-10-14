#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a;
	float  b, c, d, e, f;

	printf("薪資代碼 1代表經理人員 2代表時薪工 3代表抽佣金 4代表零工\n");
	printf("每小時工資:200\n");
	
	printf("輸入您的薪資代碼:");
	scanf_s("%d", &a);
	
	switch (a)
	{
	case 1:
		printf("每週固定薪資:88888\n");
		break;
	case 2:
		printf("輸入你這週的工作時數:");
		scanf_s("%f", &b);
		if (b >= 40)
		{
			c = (b - 40)*(200 * 1.5) + 40 * 200;
			printf("這週薪水是%.2f\n", c);
		}
		else
		{
			c = b * 200;
		}

		break;
	case  3:
		printf("輸入你這週的銷售金額:");
		scanf_s("%f",&d);

		e = d*0.057 + 250;

		printf("這週薪水是%.2f\n", e);

		break;
	case  4:
		printf("輸入你這週生產的件數:");
		scanf_s("%f",&f);
		
		break;
		
	default:
		printf("輸入的薪資代碼不存在\n");
		break;
	}
	

	system("pause");
	return 0;
}
