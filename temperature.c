#include <stdio.h>

int main()
{
	float farenheit, celsius;
	int low, high, step;

	low = 0;
	high = 300;
	step = 10;
	printf(" F      C");
	printf("\n============");

	farenheit = low;
	while (farenheit <= high)
	{
		celsius = (5.0/9.0) * (farenheit - 32);
		printf("\n%3.0f %3.1f\n", farenheit, celsius);
		farenheit = farenheit + step;
	}

	return(0);
}