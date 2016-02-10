#include <stdio.h>

int main()
{
	float farenheit, celsius;
	int low, high, step;

	low = 0;
	high = 300;
	step = 10;
	printf(" F      C");
	printf("\n--------------");

	farenheit = low;
	while (celsius <= high)
	{
		celsius = (9 / 5) * farenheit - 32;
		printf("\n%3.1f %3.1f\n", farenheit, celsius);
		farenheit = farenheit + step;
	}

	return(0);
}