#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "The quick brown fox";
	int length;

	length = strlen(str);

	printf ("The length of the string is %s is %d\n ", str, length);

	return(0);

}

