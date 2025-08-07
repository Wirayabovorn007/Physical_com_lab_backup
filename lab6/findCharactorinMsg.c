#include <stdio.h>

int	hasNext(char *c, int start, char h, char h2)
{
	while (c[start])
	{
		if (c[start] == h || c[start] == h2) return 1;
		start++;
	}
	return 0;
}

int main(){
	char txt[301], find, find_t;
	int count=0,i=-1, j;

	scanf("%[^\n]", txt);
	scanf(" %c", &find);

	find_t = find;
	find_t += (find >= 'a' && find<='z')? -32:32;
	while (txt[++i]) if (txt[i] == find || txt[i] == find_t) count+=1;
	if (!count) {
		printf("Not found.");
		return 0;
	}
	else printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", count,find);
	i = -1;
	while (txt[++i]){
		if (txt[i] == find || txt[i]==find_t){
			printf("%d", i+1);
			j = i+1;
			if (hasNext(txt, j, find, find_t)) printf(", ");
		}
	}
}