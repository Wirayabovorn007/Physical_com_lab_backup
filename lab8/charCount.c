#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str = (char *)malloc(sizeof(char) * 101);
	int lower=0, upper=0, digit=0;
	char *p = str;

	scanf("%[^\n]", str);
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z') lower++;
		if (*p >= 'A' && *p <= 'Z') upper++;
		if (*p >= '0' && *p <= '9') digit++;
		p++;
	}
	printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d", lower, upper, digit);
	free(str);
}
