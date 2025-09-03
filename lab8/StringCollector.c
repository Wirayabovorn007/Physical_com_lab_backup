#include <stdio.h>
#include <stdlib.h>

int main()
{
	int len=0;
	char c;
	char *str =  NULL;

	while (1)
	{
		scanf(" %c", &c);
		if (c == '-') break;

		str = realloc(str, len+2);
		if (!str) return 1;

		*(str+len) = c;
		len++;
		*(str+len) = '\0';
	}
	printf("%s\n", str);
	for (int i=0; i<len; i++) printf("%c", *(str + len - 1 - i));
	free(str);
}