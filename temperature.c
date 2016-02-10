#include <stdio.h>

int main()
{
	int i;
	int Celsius;

	for(i = 0; i <= 300; i+10)
	{
	Celsius = ((5/9) * (i-32));

	printf("The temperature in Celsius is %d /n", Celsius);
	}
	return 0;


}