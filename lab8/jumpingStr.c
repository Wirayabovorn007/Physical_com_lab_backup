#include <stdio.h>
#include <stdlib.h>

int main(){
	int len, step;

	scanf("%d%d", &len, &step);

	char *str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str) return 1;
	scanf(" %[^\n]", str);
	char *p = str;
	if (step == 0) return 0;
	if (step > 0) for (int i=0; i<len; i+=step) printf("%c", *(p + i));
	else if (step < 0) for (int i=len-1; i>=0; i+=step) printf("%c", *(p + i));
	free(str);
}