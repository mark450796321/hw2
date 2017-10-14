#include <stdio.h>
#include <math.h>

int main(void)
{
	double amount;
	double principal = 5000.0;
	double rate;
	unsigned int year;

	printf("%4s%21s\n", "Year", "Amount on deposit");

	for (rate = .1; rate < .122; rate += .005)
	{         
			printf("rate:%.3f\n", rate);
	         for (year = 1; year <= 15; ++year)
	       {	
		    
			amount = principal * pow(1.0 + rate, year);


			printf("%4u%21.2f\n", year, amount);
		}
	}

	system("pause");

}