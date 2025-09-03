#include <stdio.h>
#include <stdlib.h>

int main(){
	char *str = malloc(sizeof(char) * 101);
	scanf("%[^\n]", str);
	int i =0;
	char *e = str;
	while (*e != '\0')
	{
		i++;
		*e++;
	}
	e = str;
	for (int j = 0; j<i; j++)
	{
		// if (*(e + i -j) == '\n') continue;
		printf("%c", *(e + i - j - 1));
	}
	free(str);
}